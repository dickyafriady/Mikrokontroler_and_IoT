#include <LiquidCrystal.h>  // include the LiquidCrystal library

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // initialize the LCD screen with the pins

void setup() {
  lcd.begin(16, 2);  // set the dimensions of the LCD screen
}

void loop() {
  for (int i = 100; i >= 1; i--) {  // loop from 1 to 10
    lcd.clear();  // clear the LCD screen
    lcd.print(i);  // print the current value of the counter on the LCD screen
    delay(100);  // wait for one second
  }
}
