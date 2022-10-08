/* Humidity Sensor Module Configuration Library*/
/**
  *********************************************************************************************************
  * HumiditySensorConfig.h - Library for configuring the Ghitron HMZ-333A humidity sensor. This module
  * consists of an HCZ sensor and an integrated circuit which gives a linear DC Voltage output for
  * 0-100% RH.
  * Created by the Engineers Without Borders Electronics Team for the iSondlo Garden Project
  * October 2022
  ********************************************************************************************************* 
  */

#ifndef HumiditySensorConfig_h
#define HumiditySensorConfig_h

class HumiditySensorConfig {
    public:
       void setup();
       void baseline(int baseline_humidity);
};

extern HumiditySensorConfig humiditysensorconfig;
#endif
