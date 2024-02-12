#include <LiquidCrystal.h>

//Constant values
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int sensorPin = A0;
const int dry = 632;
const int wet = 309;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sensorValue = 0;         // the sensor value
int sensorMin = 309;        // minimum sensor value
int sensorMax = 632;           // maximum sensor value


void setup() {
  lcd.begin(16, 2);
  lcd.print("Soil Moisture (%)");
  Serial.begin(9600);
}

void loop() {  
  sensorValue = analogRead(sensorPin);
 
  sensorValue = constrain(sensorValue, sensorMin, sensorMax);

  int percentageHumidity = map(sensorValue, wet, dry, 100, 0);
  
  lcd.setCursor(0, 1);
  lcd.print(percentageHumidity);
  delay(100);
}
