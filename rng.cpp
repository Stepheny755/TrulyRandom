#include <cstdlib>
#include <time.h>
#include <iostream>

#include "rng.h"

float currentTime(){
  time_t timenow = time(0); 
  struct tm tstruct = *localtime(&timenow);
  
  float f = tstruct.tm_min + tstruct.tm_sec/60;
}

TRNG::TRNG(){
  
  std::cout << currentTime();
  
}
