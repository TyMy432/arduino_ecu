//This file contains injector firing settings
//This is the main file to edit when wanting to change the fuel delivery settings

void Injector_Config() {
    
    float injStart =        0                             ; //Position to start the main injection, in degrees of rotation.  See README for instructions on how to configure.                            
    float injEnd   =        150                           ; //Position to end the main injection, in degrees of rotation.  See README for instructions on how to configure. 
    //float injPrime = 0                                    ; //Position to prime before an intake stroke, in negative degrees of rotation.  See README

    int injPWMLimit[] = {   40 , 255 }                    ; //Defines the injector PWN signal limits in order of Lowest, Highest
  
}