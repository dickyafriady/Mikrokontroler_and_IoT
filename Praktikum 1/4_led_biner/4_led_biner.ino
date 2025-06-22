int led = 13;
int led1 = 12; 
int led2 = 11; 
int led3 = 10; 

void setup() {
  // deklarasi pin I/O
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  // 0000
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(1000);
  
  // 0001
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);

  // 0010
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(1000);
   
  // 0011
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(1000);

  // 0100
  digitalWrite(led, LOW);
  digitalWrite(led, HIGH);
  digitalWrite(led, LOW);
  digitalWrite(led, LOW);
  delay(1000);

  // 0101
  digitalWrite(led, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);

  // 0110
  digitalWrite(led, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(1000);
  
  // 0111
  digitalWrite(led, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(1000);

  // 1000
  digitalWrite(led, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(1000);

  // 1001
  digitalWrite(led, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);

  // 1010
  digitalWrite(led, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(1000);
  
  // 1011
  digitalWrite(led, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(1000);

  // 1100
  digitalWrite(led, HIGH);
  digitalWrite(led, HIGH);
  digitalWrite(led, LOW);
  digitalWrite(led, LOW);
  delay(1000);

  // 1101
  digitalWrite(led, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);

  // 1110
  digitalWrite(led, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(1000);

  // 1111
  digitalWrite(led, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(1000);
}
