//This function calls the pin configurations and sensor settings.

void hwconfig(){

//                      --------This section assigns the inputs and outputs to the physical pins--------
    
//  ********Injector channel output pins********

// Default pins are 22 through 45, allowing for 24 individually controlled injectors.

    int injector1 =  22      ;          // Injectors are assigned to cylinders in numerical order.  Injector1 is for Cylinder1, Injector2 for Cylinder2, ect. 
    int injector2 =  23      ;          // If multiple injectors per cylinder are used, then the injectors are grouped in numerical order.
    int injector3 =  24      ;          // E.g, it 3 injectors per cylinders are used, then injectors 1, 2 & 3 are for cylinder1, injectors 4, 5, & 6 are for cylinder2, ect.
    int injector4 =  25      ;          //   That is if you are configuring the injectors to be individually controlled.  Multiple injectors operating in tandem per cylinder
    int injector5 =  26      ;          //   will be done through hardware, and multiple outputs per injector channel.
    int injector6 =  27      ;
    int injector7 =  28      ;
    int injector8 =  29      ;
    int injector9 =  30      ;          
    int injector10 = 31      ;
    int injector11 = 32      ;
    int injector12 = 33      ;
    int injector13 = 34      ;
    int injector14 = 35      ;
    int injector15 = 36      ;
    int injector16 = 37      ;
    int injector17 = 38      ;
    int injector18 = 39      ;
    int injector19 = 40      ;
    int injector20 = 41      ;
    int injector21 = 42      ;
    int injector22 = 43      ;
    int injector23 = 44      ;
    int injector24 = 45      ;


//   This assignes the above specified pins as outputs.  Changing these lines will throw hella errors.

pinMode(injector1,  OUTPUT) ;
pinMode(injector2,  OUTPUT) ;
pinMode(injector3,  OUTPUT) ;
pinMode(injector4,  OUTPUT) ;
pinMode(injector5,  OUTPUT) ;
pinMode(injector6,  OUTPUT) ;
pinMode(injector7,  OUTPUT) ;
pinMode(injector8,  OUTPUT) ;
pinMode(injector9,  OUTPUT) ;
pinMode(injector10, OUTPUT) ;
pinMode(injector11, OUTPUT) ;
pinMode(injector12, OUTPUT) ;
pinMode(injector13, OUTPUT) ;
pinMode(injector14, OUTPUT) ;
pinMode(injector15, OUTPUT) ;
pinMode(injector16, OUTPUT) ;
pinMode(injector17, OUTPUT) ;
pinMode(injector18, OUTPUT) ;
pinMode(injector19, OUTPUT) ;
pinMode(injector20, OUTPUT) ;
pinMode(injector21, OUTPUT) ;
pinMode(injector22, OUTPUT) ;
pinMode(injector23, OUTPUT) ;
pinMode(injector24, OUTPUT) ;

//  ********Sensor channel input pins********

    int     rpmIn       =   46  ;       //Distributer signal
    char    throttleIn  =   A11 ;       //Throttle position Sensor  
    char    tempIn      =   A10 ;       //Temprature sensor
    int     mapInA      =   47  ;       //MAP sensor
    int     mapInB      =   48  ;       //Second MAP sensor, for twin injection manifolds
    char    o2InA       =   A7  ;       //O2 sensor
    char    o2InB       =   A6  ;       //Second O2 sensor, for dual exhaust systems

//    This assigns the above specified pins as inputs.  Changing these lines will throw hella errors.

pinMode(rpmIn       , INPUT);
pinMode(throttleIn  , INPUT);
pinMode(tempIn      , INPUT);
pinMode(mapInA      , INPUT);
pinMode(mapInB      , INPUT);
pinMode(o2InA       , INPUT);
pinMode(o2InB       , INPUT);













}