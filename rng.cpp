<<<<<<< HEAD
#include <cstdlib>
#include <time.h>
#include <iostream>

#include "rng.h"

TRNG::TRNG(int min,int max,FLAG values){

  if(max<min){
    int c = max;
    max = min;
    min = c;
  }
  setMin(min);
  setMax(max);
  this->diff = max-min; 
  this->key = 1;
  setkey(values);
}

void TRNG::setkey(){

  try{


  }catch




}

int TRNG::rand(){

  int rand = std::rand()*key;
  int ret = (rand%diff+min);

}
=======

>>>>>>> beeabf3444334267ea06fb344e232b18d95508f1
