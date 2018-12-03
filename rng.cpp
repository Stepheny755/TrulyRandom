#include <stdlib>
#include <time.h>

#include "rng.h"

const float currentTime(){
  time_t timenow = time(0); 
  struct tm tstruct = *localtime(&timenow);
  
  float f = tstruct.tm_min + tstruct.tm_sec/60;
}

