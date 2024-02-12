#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>

// Data wire is plugged into digital pin 2 on the Arduino
#define ONE_WIRE_BUS 8

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
//const int sensorPin = D7;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Setup a oneWire instance to communicate with any OneWire device
OneWire oneWire(ONE_WIRE_BUS);  

// Pass oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);

void setup(void)
{ 
  lcd.begin(16, 2); 
  lcd.print("Temperature: ");
  sensors.begin();  // Start up the library
  Serial.begin(9600);
}

void loop(void)
{ 
  // Send the command to get temperatures
  sensors.requestTemperatures(); 

  //print the temperature in Celsius
  
  lcd.setCursor(0, 1);
  int temperature = sensors.getTempCByIndex(0);

  
  lcd.print(temperature);
  lcd.print((char)176);//shows degrees character
  lcd.print("C  |  ");
  
  //print the temperature in Fahrenheit
  //Serial.print((sensors.getTempCByIndex(0) * 9.0) / 5.0 + 32.0);
  //Serial.print((char)176);//shows degrees character
  //Serial.println("F");
  
  delay(500);
}
