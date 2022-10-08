/* Light Sensor Configuration Library*/
/**
  *********************************************************************************************************
  * LightSensorConfig.h - Library for configuring the connection between the LDR's and Arduino UNO R3. 
  * Created by the Engineers Without Borders Electronics Team for the iSondlo Garden Project
  * October 2022
  ********************************************************************************************************* 
  */

#ifndef LightSensorConfig_h
#define LightSensorConfig_h

class LightSensorConfig {
  public:
      void setup();
      void lowlight_trigger(int low_light_val);
};
extern LightSensorConfig lightsensorconfig;
#endif
