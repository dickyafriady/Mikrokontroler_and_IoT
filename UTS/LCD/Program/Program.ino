#include <LiquidCrystal.h> // include the LiquidCrystal library

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  // count up from 1 to 10:
  for (int i = 0; i <= 10; i+=3) {
    lcd.clear(); // clear the display
    lcd.print("Counter up: ");
    lcd.print(i); // print the current count to the LCD
    delay(1000); // wait for a second
  }

  // count down from 10 to 1:
  for (int i = 10; i >= 1; i-=2) {
    lcd.clear(); // clear the display
    lcd.print("Counter down: ");
    lcd.print(i); // print the current count to the LCD
    delay(1000); // wait for a second
  }
}
