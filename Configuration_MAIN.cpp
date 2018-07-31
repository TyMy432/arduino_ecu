//THIS IS THE MAIN CONFIG FILE.  BE CAREFUL.

void config(){

//                                  ***ENGINE INFORMATION***
int disp =      4948.89                    ; //Defines engine displacement (cubic centimeters)
int cylNum =    8                          ; //Defines how many cylinders are present, default is 8
int firOrd[] ={ 1, 5, 4, 2, 6, 3, 7, 8   } ; //Defines the firing order
int bore =      10.16                      ; //Defines cylinder bore (centimeters)
int stroke =    7.62                       ; //Defines cylender stroke (centimeters)
int cam[] ={   0.00, 0.00 , 0.00 , 0.00 }  ; //Defines the cam lift and duration format: { <intake lift> , <intake duration> , <exhaust lift> , <exhaust duration> } (milimeters)

int cylDisp = disp / cylNum ;                //Auto-calculated value, per-cylinder displacement




}