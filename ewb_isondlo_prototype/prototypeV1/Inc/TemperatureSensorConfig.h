/* Temperature Sensor Configuration Library*/
/**
  *********************************************************************************************************
  * TemperatureSensorConfig.h - Library for configuring the DS18B20 temperature sensing module to connect
  * with UNO R3. The module works for temperature between -25C to +125C. Outputs 9 to 12 bit 
  * centigrade value. Enable user-programmable triggers for high and low temperatures.
  * Created by the Engineers Without Borders Electronics Team for the iSondlo Garden Project
  * October 2022
  ********************************************************************************************************* 
  */

#ifndef TemperatureSensorConfig_h
#define TemperatureSensorConfig_h

class TemperatureSensorConfig {
    public:
       void setup();
       void lower_trigger(int lower_temperature);
       void upper_trigger(int high_temperature);
       void clear();
};

extern TemperatureSensorConfig temperaturesensorconfig;
#endif
