//This function sends test vaules to all loop functions, and compaires the returned values to the expected, pre-calculated result.
//If a function is not intended to return a value, it initiates a *hopefully* mini-test in the function itself and returns a pass or fail.



void Test(){                                   //eventually, a value pasNum will identify the level of self-test, e.g. levels 1-4
    
    int returned ;                             //a simple int for holding a returned value from a tested function
      
      Serial.print("Beginning self test...");

  //When the initial backbone code is written, this function will be written and tied in.

  //This function may only be used to configure the self test paramaters, the test itself may run in loop instead of all in this function.

      Serial.print("Self test complete");

}