
#include <Scheduler.h>
#include <startUp.cpp>
#include <Test>
#include <startup_maps.cpp>
#include <Configuration_MAIN.cpp>

 void setup() {
   // put your setup code here, to run once:
  Serial.begin(9600);             //Initializes serial
  Serial.print("Initializing...");


    startUp() ;



   Scheduler.startLoop(Loop2);     //Loop2 controls running condition sensor inputs and interpretation
   Scheduler.startLoop(Loop3);     //Loop3 runs fuel/air/timing algorithems based on Loop2
   Scheduler.startLoop(Loop4);     //Loop4 calculates injector and ignition timing based on Loop3
   Scheduler.startLoop(Loop5);     //Loop5 fires the injectors and ignition
 }

 void loop() {                     //loop runs mics. functions and can handle offloaded tasks from all other loops
 

 }

 void Loop2(){


 }

 void Loop3(){


 }

 void Loop4(){


 }

 void Loop5(){


 }