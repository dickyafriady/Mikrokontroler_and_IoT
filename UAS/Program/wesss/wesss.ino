const int IR_sensor = D1; // Pin D2 digunakan sebagai input dari sensor inframerah
const int buzzer = D0; // Pin D3 digunakan sebagai output untuk buzzer

void setup() {
  Serial.begin(115200); // Inisialisasi serial
  pinMode(IR_sensor, INPUT); // Pin D2 dikonfigurasi sebagai input
  pinMode(buzzer, OUTPUT); // Pin D3 dikonfigurasi sebagai output
}

void loop() {
  int sensorValue = digitalRead(IR_sensor); // Baca status dari sensor inframerah
  if (sensorValue == LOW) { // Jika tidak terdeteksi infrared
    Serial.println("Tidak ada infrared");
    digitalWrite(buzzer, LOW); // Matikan buzzer
  } else { // Jika terdeteksi infrared
    Serial.println("Terdeteksi infrared");
    digitalWrite(buzzer, HIGH); // Hidupkan buzzer
  }
  delay(1000); // Tunggu 1 detik sebelum membaca status dari sensor lagi
}
