//THIS IS THE MAIN CONFIG FILE.  BE CAREFUL.
//Variables that appear commented are not yet used, and will be potentially expanded upon
void config(){

#include <Injector_Config.cpp>



//                                  ***ENGINE INFORMATION***

float disp =       4948.89                    ; //Defines engine displacement (cubic centimeters)
int cylNum =       8                          ; //Defines how many cylinders are present, default is 8
int firOrd[] ={    1, 5, 4, 2, 6, 3, 7, 8   } ; //Defines the firing order, from first (leftmost) to last (rightmost)
float bore =       10.16                      ; //Defines cylinder bore (centimeters)
float stroke =     7.62                       ; //Defines cylender stroke (centimeters)
float cam[] ={     0.00, 0.00 , 0.00 , 0.00 } ; //Defines the cam lift and duration format: { <intake lift> , <intake duration> , <exhaust lift> , <exhaust duration> } (milimeters)

//                                  ***FUEL SYSTEM INFORMATIOIN***

float injSize =    00                         ; //Defines the injector flow rate (liters per minute)       
float gasPress =   00                         ; //Defines the normal operating fuel pressure (bar)
float gPressAllow= 00                         ; //Defines the % tolerance for fuel pressure
//  int injNum =       1                          ; //Defines number of injectors per cylinder, default is 1, ??expansion into multiple injector sizes??

//int injPWMLimit[] = {   40 , 255 }            ; //Defines the injector PWN signal limits in order of Lowest, Highest  
int injDutyCyc =   80                         ; //Defines the safe duty cycle for the injectors, default is 80%
float injFlow =    20                         ; //Defines the injector flow rate (milimeters per second)
float flowPress =  3                          ; //Defines the pressure that the injectors were flow tested at, default is 3 bar (44.1 psi) 

injector_config()                             ; //This function calls the injector settings config file, which handles running settings



//AUTO CALCULATED VALUES
float cylDisp = 'disp' / 'cylNum' ;                //Per-cylinder displacement




}