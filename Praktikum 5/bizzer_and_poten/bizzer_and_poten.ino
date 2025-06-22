// set the pin for the button and the buzzer
const int buttonPin = 2;
const int buzzerPin = 8;

void setup() {
  // set the buttonPin as an input
  pinMode(buttonPin, INPUT);
  
  // set the buzzerPin as an output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // read the value of the button
  int buttonValue = digitalRead(buttonPin);
  
  if (buttonValue == HIGH) {
    // the button is pressed
    // play a tone with a frequency of 440 Hz for 500 milliseconds
    tone(buzzerPin, 440, 500);
  } else {
    // the button is not pressed
    // stop the tone
    noTone(buzzerPin);
  }
}
