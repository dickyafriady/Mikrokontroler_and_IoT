#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <Adafruit_LiquidCrystal.h>
#include <BlynkSimpleEsp8266.h>

#define DHTPIN 7
#define DHTTYPE DHT22
#define FAN_PIN 8
#define THRESHOLD 28.0
#define BLYNK_PRINT Serial
char auth[] = "4Uy4cg7DWv3v-NaJzT3KaHaJzrKnQswX";

DHT dht(DHTPIN, DHTTYPE);
Adafruit_LiquidCrystal lcd(0x27, 16, 2);

BLYNK_WRITE(V1) {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  lcd.clear();
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");

  if (t > THRESHOLD) {
    digitalWrite(FAN_PIN, HIGH);
  } else {
    digitalWrite(FAN_PIN, LOW);
  }

  Blynk.virtualWrite(V2, t);
  Blynk.virtualWrite(V3, h);
}

void setup() {
  Serial.begin(115200);
  lcd.begin(16, 2);
  lcd.print("Temperature");
  lcd.setCursor(0, 1);
  lcd.print("Monitoring");
  delay(2000);
  dht.begin();
  pinMode(FAN_PIN, OUTPUT);
  Blynk.begin(auth, "ROKET", "gateltelatcog");
}

void loop() {
  Blynk.run();
}
