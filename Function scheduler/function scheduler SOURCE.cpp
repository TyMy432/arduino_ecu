
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

 void setup() {
   // put your setup code here, to run once:
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

 void loop() {                     //loop runs misc. functions and can handle offloaded tasks from all other loops
 

 }

 void Loop2(){


 }

 void Loop3(){


 }

 void Loop4(){


 }

 void Loop5(){


 }