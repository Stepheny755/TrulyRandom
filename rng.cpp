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
  
  //std::cout << currentTime();
  for(int i = 0; i < 10 ; i++) {

        int first_clock = clock();
        int first_time = time(NULL);

        while(time(NULL) <= first_time) {}

        int second_time = time(NULL);
        int second_clock = clock();

        std::cout << "Actual clocks per second = " << (second_clock - first_clock)/(second_time - first_time) << "\n";

        std::cout << "CLOCKS_PER_SEC = " << CLOCKS_PER_SEC << "\n";

    }
  
  
  
}
