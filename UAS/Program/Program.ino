const int buzzerPin = D0; // Pin untuk buzzer
const int irSensorPin = D1; // Pin untuk sensor infrared

void setup() {
  pinMode(buzzerPin, OUTPUT); // Inisialisasi buzzer sebagai output
  pinMode(irSensorPin, INPUT); // Inisialisasi sensor infrared sebagai input
}

void loop() {
  int sensorValue = digitalRead(irSensorPin); // Baca nilai sensor infrared

  if (sensorValue == LOW) { // Jika sensor infrared diterima sinyal
    digitalWrite(buzzerPin, HIGH); // Nyalakan buzzer
    delay(500); // Tunggu selama 500 milidetik
    digitalWrite(buzzerPin, LOW); // Matikan buzzer
    delay(500); // Tunggu selama 500 milidetik
  }
}
