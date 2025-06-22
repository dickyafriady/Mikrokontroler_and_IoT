#define Buzzer 4 //mendefinisikan pin 4 Arduino sebagai pin Output Buzzer
#define trigPin 5 //mendefinisikan pin 5 arduino sebagai trigger pin sensor ultrasonic
#define echoPin 6 //mendefinisikan pin 6 arduino sebagai echoPin sensor ultrasonic

long duration; // variabel durasi sensor ultrasonic
int distance = 0; // jarak dalam centimeter

void setup() {

pinMode(trigPin, OUTPUT); // setting triggerpin sebagai output
pinMode(echoPin, INPUT); // setting echopin sebagai Input
pinMode(Buzzer, OUTPUT); // setting Buzzer sebagai Output
Serial.begin(9600); // setting kecepatan pengiriman serial monitor
}

void loop() {

digitalWrite(trigPin, HIGH);// aktifkan sensor ultrasonic
delayMicroseconds(10); // selama 10 microseconds
digitalWrite(trigPin, LOW); // matikan sensor ultrasonic
duration = pulseIn(echoPin, HIGH); // baca rentan waktu dari trigPin High sampai echoPin high
distance= duration*0.034/2; //konversi selang waktu ke CM
if (distance <= 50) // Hanya menampilkan jarak jika jaraknya kurang dari 300 cm / 3 meter

{

Serial.println(distance); // kirim data jarak ke serial

digitalWrite(Buzzer,HIGH);

delay(distance);

digitalWrite(Buzzer,LOW);

delay(distance);

  }
}
