/* Soil Moisture Sensor Library*/
/**
  *********************************************************************************************************
  * SoilMoistureSensorConfig.h - Library for configuring the connection between the
  * arduino and the KE2023 KEYES soil moisture sensor module. 
  * 0~300 dry soil
  * 300~700 humid soil
  * 700~950 in water
  * Created by the Engineers Without Borders Electronics Team for the iSondlo Garden Project
  * October 2022
  ********************************************************************************************************* 
  */

#ifndef SoilMoistureSensorConfig_h
#define SoilMoistureSensorConfig_h

class SoilMoistureSensorConfig {
    public:
       void setup();
       void baseline(int soilmoisture_baseline);
};

extern SoilMoistureSensorConfig soilmoisturesensorconfig;
#endif

