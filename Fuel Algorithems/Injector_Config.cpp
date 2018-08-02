//This file contains injector firing settings.
//This is the main file to edit when wanting to change the fuel delivery settings.
//Commented lines are not yet integrated into the runing code.

    void injector_config () {
//                  **Injection Window**
    float injStart =        0                               ; //Position to start the main injection, in degrees of rotation.  See README for instructions on how to configure.                            
    float injEnd   =        150                             ; //Position to end the main injection, in degrees of rotation.  See README for instructions on how to configure. 

//                  **Intake Prime Charge** 
    //float injPrime = 0                                      ; //Position to prime before an intake stroke, in negative degrees of rotation.  See README
    //float primeAmnt= 0                                      ; //Amount of fuel released as the prime  (mililiters)

//                  **Percent Adjustment**                  
    float microAdg =        100                            ; //Blanket %fuel adjustment.   E.g. set all fuel injection to be @ 97% volume
    float microAdgLim[] = { 95, 110}                       ; //Sets the min and max % adjustment, to prevent overrich or overlean sutuations.  Defaults min 95% max 110%
}