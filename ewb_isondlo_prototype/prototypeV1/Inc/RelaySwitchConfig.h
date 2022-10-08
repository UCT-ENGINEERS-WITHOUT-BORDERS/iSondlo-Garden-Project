/* Relay Switch Configuration Library*/
/**
  *********************************************************************************************************
  * RelaySwitchConfig library for setting up the single relay module. Module is active HIGH. Intended for 
  * use with solenoid valve. 
  * Created by the Engineers Without Borders Electronics Team for the iSondlo Garden Project
  * October 2022
  ********************************************************************************************************* 
  */

#ifndef RelaySwitchConfig_h
#define RelaySwitchConfig_h

class RelaySwitchConfig {
    public:
       void setup();
};

extern RelaySwitchConfig relayswitchconfig;
#endif
