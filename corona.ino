// include the library code:
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 8, 6, 7);
int licznik = 0;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.clear();
  lcd.print("w Polsce");
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
      lcd.print("w Polsce");
Serial.print("wyczyściłem");
licznik = 0;
  }
}
