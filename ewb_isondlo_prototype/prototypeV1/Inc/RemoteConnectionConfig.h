/* Remote Connection Configuration Library*/
/**
  *********************************************************************************************************
  * RemoteConnectionConfig.h - Library for configuring the SIM900 GSM GPRS module. For this application,
  * the module is used to setup an internet connection.
  * Created by the Engineers Without Borders Electronics Team for the iSondlo Garden Project
  * October 2022
  ********************************************************************************************************* 
  */

#ifndef RemoteConnectionConfig_h
#define RemoteConnectionConfig_h

class RemoteConnectionConfig {
    public:
        void setup();
        void SIM900_start();
        void reset();
};

extern RemoteConnectionConfig remoteconnectionconfig
#endif
