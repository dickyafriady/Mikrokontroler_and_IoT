// include the library code for the LCD screen
#include <LiquidCrystal.h>

// initialize the LCD screen with the pins it is connected to
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows
  lcd.begin(16, 2);
}

void loop() {
  // count up from 1 to 10
  for (int i = 1; i <= 10; i++) {
    // clear the LCD screen
    lcd.clear();
    // set the cursor to the first column of the first row
    lcd.setCursor(0, 0);
    // print the current count on the LCD screen
    lcd.print(i);
    // wait for a short time before incrementing the count
    delay(500);
  }

  // count down from 10 to 1
  for (int i = 10; i >= 1; i--) {
    // clear the LCD screen
    lcd.clear();
    // set the cursor to the first column of the first row
    lcd.setCursor(0, 0);
    // print the current count on the LCD screen
    lcd.print(i);
    // wait for a short time before decrementing the count
    delay(500);
  }
}
