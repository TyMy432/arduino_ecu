
#include <Scheduler.h>
#include <startUp.cpp>
#include <Test.cpp>
#include <startup_maps.cpp>
#include <Configuration_MAIN.cpp>
#include <Injector_Config.cpp>
#include <define_LOOP.cpp>
#include <define_LOOP2.cpp>
#include <define_LOOP3.cpp>
#include <define_LOOP4.cpp>
#include <define_LOOP5.cpp>
#include <hwconfig.cpp>

 void setup() {
   
  Serial.begin(9600);             //Initializes serial
  Serial.print("Initializing...");

  Serial.print("Calling main configuration...");

    startUp() ;                    //This function calls the Main configuration, and includes any other procedures you wish to run at startup

      loopDefine()  ;              //These functions define all the variables and call the algorithems for the 5 main program loops.
      loop2Define() ;
      loop3Define() ;
      loop4Define() ;
      loop5Define() ;
    
  Serial.print("Defined Main Loops...");


  Serial.print("Startup procedure complete...");

  //This section is responsible for initializing loops 2-5, loop is started automatically.

   Scheduler.startLoop(Loop2);     //Loop2 controls running condition sensor inputs and interpretation
   Scheduler.startLoop(Loop3);     //Loop3 runs fuel/air/timing algorithems based on Loop2
   Scheduler.startLoop(Loop4);     //Loop4 calculates injector and ignition timing based on Loop3
   Scheduler.startLoop(Loop5);     //Loop5 fires the injectors and ignition

  Serial.print("System ready");
 }

//                                                        THE FOLOWING ARE THE 5 MAIN LOOPS.  THEY ARE RESPONSIBLE FOR CALLING ALL THE
//                                                        OTHER FUNCTIONS, AND ARE THE MAIN ARCHETECTURE.


 void loop() {                     
//    This loop runs misc. functions when called to, and can handle offloaded tasks from all other loops.
//    However, it will include no provisions for acting on the return of a function, instead it must relay it foreward to the loop which requested the function be called.
//    It also is responsible for schedualing internal updates of the running maps.

 }

 void Loop2(){                     
//    This loop is responsible for reading running condition sensors, interpreting their signals and storing the values in the appropriate locations as defined in loop2Define().
//    For now, the sensors will be read twice a second.  However, eventually it will be a definable interval.

 }

 void Loop3(){
//    This loop is responsible for calculating the current fuel/air/timing maps based on the data from loop2.
//    It stores the re-calculated maps in a temporary location, until it is transferred into the main location and used by loop4.
//    This prevents the maps from being updated during an injector calculation.

 }

 void Loop4(){
//    This loop calculates injection and ignition timing based on the maps calculated by loop3 and the current readout of the Throttle Position Sensor.
//    It also periodically notifies loop when it is idle, so that the re-calculated maps can be made active without interrupting the injector calculations.

 }


 //                                                                   *****************
 //                                  Everything above loop5 are internal calculations, dealing with general settings.
 //                                  loop5 is where that data is split up for the individual cylinders.
 //                                  Therefor, any single-cylinder modifier functions are called from loop5, immediatly before the physical event.
 //                                  This is important to understand when adding custom per-cylinder tunes, in that any such customizations will be applied
 //                                  TO the main configuration, and NOT in place of it.
 //                                                                   *****************


 void Loop5(){
//    This loop is responsible for sending the injector and ignition signals out of the ECU, into the MOSFET amplifiers to trigger the injection and spark events.
//    It bases function timing on the Crankshaft position sensor, and tracks which cylinder is recieving an event.

 }