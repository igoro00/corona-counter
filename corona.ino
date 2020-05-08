// include the library code:
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.clear();
  lcd.print("in Poland");
}

void loop() {
  lcd.setCursor(0, 1);
  if (Serial.available() > 2) {
    int ile = Serial.parseInt();
    Serial.print("Wczytalam ");
          lcd.print(ile);
          Serial.print(ile);
          licznik ++;
  }
  if(licznik > 10){
    lcd.clear();
      lcd.print("In Poland");
Serial.print("wyczyściłem");
licznik = 0;
  }
}
