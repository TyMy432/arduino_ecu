// This file is called when the ECU is initialized
// Use this for future expansion    e.g. initializing secondary electronics or new code modules before implanting them perminantly
#include <Test.cpp>
#include <Configuration_MAIN.cpp>
#include <Injector_Config.cpp>

void startUp (){
    
        Test() ;    //startUp calls the self test.  Probably best to leave this until the groundwork is layed
        config() ;  //Load the main config file.
}