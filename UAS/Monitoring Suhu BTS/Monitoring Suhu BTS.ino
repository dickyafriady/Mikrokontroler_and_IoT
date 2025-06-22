#define BLYNK_TEMPLATE_ID "TMPLQF0pEuLY"
#define BLYNK_DEVICE_NAME "Monitoring Suhu di BTS"



#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "4Uy4cg7DWv3v-NaJzT3KaHaJzrKnQswX";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "ITTelkom_Surabaya";
char pass[] = "roadtoexcellent!";


#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define DHTPIN D7
#define DHTTYPE DHT22 

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

BLYNK_WRITE(V0) { 
  digitalWrite(D7, param.asInt());
}

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(D7, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print(" %\t");
  lcd.setCursor(0,0);
  lcd.print("Temperature: ");
  lcd.print(temperature);
  lcd.print(" *C ");
  Blynk.run();
  
  delay(1000);
}