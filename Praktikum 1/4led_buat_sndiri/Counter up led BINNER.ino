int led=7;
int led2=6;
int led3=5;
int led4=4;
int timer=100;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT); 
}

void loop() {
  // 0000
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(timer);

  //0001 
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(timer);

  //0010 
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(timer);
  
  //0001 
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(timer);
  
  //0011 
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(timer);
  
  //0100  
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(timer);
  
  //0101
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(timer);
  
  //0110
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(timer);
  
  //0111
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(timer);
  
  //1000
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(timer);
  
  //1010
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(timer);
  
  //1011
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(timer);
  
  //1100
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(timer);
  
  //1101
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(timer);
  
  //1110
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(timer);
  
  //1111
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(timer);


}
