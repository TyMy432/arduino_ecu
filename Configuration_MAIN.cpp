//THIS IS THE MAIN CONFIG FILE.  BE CAREFUL.
//Variables that appear commented are not yet used, and will be potentially expanded upon
void config(){
#include <Injector_Config>



//                                  ***ENGINE INFORMATION***

float disp =       4948.89                    ; //Defines engine displacement (cubic centimeters)
int cylNum =       8                          ; //Defines how many cylinders are present, default is 8
int firOrd[] ={    1, 5, 4, 2, 6, 3, 7, 8   } ; //Defines the firing order, from first (leftmost) to last (rightmost)
float bore =       10.16                      ; //Defines cylinder bore (centimeters)
float stroke =     7.62                       ; //Defines cylender stroke (centimeters)
float cam[] ={     0.00, 0.00 , 0.00 , 0.00 } ; //Defines the cam lift and duration format: { <intake lift> , <intake duration> , <exhaust lift> , <exhaust duration> } (milimeters)

//                                  ***FUEL SYSTEM INFORMATIOIN***

float injSize =    00                         ; //Defines the injector flow rate       *add units
float gasPress =   00                         ; //Defines the normal operating fuel pressure *add units
float gPressAllow= 00                         ; //Defines the % tolerance for fuel pressure
//  int injNum =       1                          ; //Defines number of injectors per cylinder, default is 1, ??expansion into multiple injector sizes??
injConfig()                                   ; //This function calls the injector settings config file





//AUTO CALCULATED VALUES
int cylDisp = disp / cylNum ;                //Per-cylinder displacement




}