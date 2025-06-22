/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-ultrasonic-sensor-piezo-buzzer
 */

#define TRIG_PIN   D5 // ESP32 pin GIOP26 connected to Ultrasonic Sensor's TRIG pin
#define ECHO_PIN   D6 // ESP32 pin GIOP25 connected to Ultrasonic Sensor's ECHO pin
#define BUZZER_PIN D7 // ESP32 pin GIOP17 connected to Piezo Buzzer's pin
#define DISTANCE_THRESHOLD 50 // centimeters

// variables will change:
float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);         // initialize serial port
  pinMode(TRIG_PIN, OUTPUT);   // set ESP32 pin to output mode
  pinMode(ECHO_PIN, INPUT);    // set ESP32 pin to input mode
  pinMode(BUZZER_PIN, OUTPUT); // set ESP32 pin to output mode
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(ECHO_PIN, HIGH);
  // calculate the distance
  distance_cm = 0.017 * duration_us;

  if (distance_cm < DISTANCE_THRESHOLD)
    digitalWrite(BUZZER_PIN, HIGH); // turn on Piezo Buzzer
  else
    digitalWrite(BUZZER_PIN, LOW);  // turn off Piezo Buzzer

  // print the value to Serial Monitor
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500);
}
