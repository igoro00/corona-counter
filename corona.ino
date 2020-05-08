#define debug true

// include the library code:
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
char incomingByte = 0;
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    //if there's a new message
    
    lcd.setCursor(0, 1);
    lcd.clear();
    lcd.print("Infected in Poland:");
    while (Serial.available()>0) {
      //keep recieving the message until the entire message is read
      
      incomingByte = Serial.read();
      if(debug){
        Serial.println("Recieved: " + incomingByte);
      }
      lcd.print(incomingByte);
    }
  }
}
