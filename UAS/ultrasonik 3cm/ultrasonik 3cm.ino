#include <ESP8266WiFi.h>
#include <ThingESP.h>

#include "CTBot.h";
CTBot myBot;

String ssid = "Cacaa Ichaa";
String pass = "tere0218";

//token dan id telegram

String token = "5940022417:AAH3VoE7PKl3vzSE07MU5l-_2eZ0HGftPts";
const int id = 825993682 ;

ThingESP8266 thing("DICKYAFRIA4", "RoomSecurity1", "ProjectUserName");


#define TRIGGER_PIN D5
#define ECHO_PIN D6
#define BUZZER_PIN D7
#define MAX_DISTANCE 3

void setup() {
  Serial.begin(9600);
  Serial.println("Memulai telegram bot. Koneksi ke WIFI");
  myBot.wifiConnect(ssid,pass);
  myBot.setTelegramToken(token);

  if(myBot.testConnection())
     Serial.println("Koneksi Berhasil");
  else
      Serial.println("koneksi Gagal");


  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  TBMessage msg;
  if (myBot.getNewMessage(msg))
  
     Serial.println("Pesan Masuk : " + msg.text);
  

  long duration, distance;
  
  // Trigger sensor ultrasonik
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  
  // Baca jarak objek
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = (duration / 2) / 29.1;
  
  // Jika jarak objek <= 3 cm, nyalakan buzzer
  if (distance <= MAX_DISTANCE) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
    digitalWrite(BUZZER_PIN, LOW);
    delay(500);
    digitalWrite(BUZZER_PIN, HIGH);
    myBot.sendMessage(id, "OBJEK TERDETEKSI","");
  } 
  else
    digitalWrite(BUZZER_PIN, LOW);
  }

