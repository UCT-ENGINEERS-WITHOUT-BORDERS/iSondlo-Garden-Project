/*********
  Engineers Without Borders
  University of Cape Town
*********/

#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to the Arduino digital pin 4
#define ONE_WIRE_BUS 4
#define SOIL_PIN A0
#define HUMID_PIN A1
#define LDR_PIN A2

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

float moist_value = 0;
int ldr_value = 0;
float hmz_value = 0;

void setup(void)
{
  // Start serial communication for debugging purposes
  Serial.begin(9600);
  // Start up the library
  sensors.begin();
}

void loop(void){
  //--------------------------------------------LIGHT SENSING----------------------------------------------- 
  ldr_value = analogRead(LDR_PIN);
  Serial.println(ldr_value);
  if (ldr_value > 300)      // NEW
  {
    Serial.println("Sufficient lighting."); 
  }
  else
  {
    Serial.println("Insufficient lighting.")
  }
  delay(2);


  //---------------------------------------------TEMPERATURE SENSING----------------------------------------
  // Call sensors.requestTemperatures() to issue a global temperature and Requests to all devices on the bus
  sensors.requestTemperatures(); 
  Serial.print("Celsius temperature: ");
  // Why "byIndex"? You can have more than one IC on the same bus. 0 refers to the first IC on the wire
  Serial.println(sensors.getTempCByIndex(0)); 
  //Serial.print(" - Fahrenheit temperature: ");
  //Serial.println(sensors.getTempFByIndex(0));
  delay(100);

  //---------------------------------------------SOIL MOISTURE SENSING---------------------------------------
  /*
    # Example code for the moisture sensor
    # Connect the sensor to the A0(Analog 0) pin on the Arduino board
    # the sensor value description
    # 0  ~300     dry soil
    # 300~700     humid soil
    # 700~950     in water
  */
  moist_value = analogRead(SOIL_PIN);
  Serial.print("Moisture Sensor Value:");
  Serial.println(moist_value);
  if (moist_value < 300){
    Serial.println("Soil is too dry.");
  }
  else if (moist_value > 300 && moist_value < 700){
    Serial.println("Soil is okay.");
  } 
  else {
    Serial.println("Caution! Soil moisture too high.");
  }
  delay(100);

}
