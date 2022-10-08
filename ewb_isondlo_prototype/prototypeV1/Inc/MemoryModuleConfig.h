/* Memory Module Configuration Library*/
/**
  *********************************************************************************************************
  * MemoryModuleConfig.h - Memory module library for configuring the Arduino driver SD card. This module
  * is for reading and writing files to and from the Arduino. This module does not work well for 
  * SD cards that have more than 2GB of memory.
  * Created by the Engineers Without Borders Electronics Team for the iSondlo Garden Project
  * October 2022
  ********************************************************************************************************* 
  */

#ifndef MemoryModuleConfig_h
#define MemoryModuleConfig_h

class MemoryModuleConfig {
   public:
     void setup();
     void clear();
     double available_space();
};

extern MemoryModuleConfig memorymoduleconfig;
#endif
