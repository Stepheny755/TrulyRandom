#include <cstdlib>
#include <time.h>
#include <iostream>
#include <cstdlib>

#include "rng.h"

int TRNG::getMin(int){ return min; }
int TRNG::getMax(int){ return max; }
void TRNG::setMin(int a){ min = a; }
void TRNG::setMax(int a){ max = a; }

TRNG::TRNG(int min,int max,Flags values){

  if(max<min){
    int c = max;
    max = min;
    min = c;
  }
  setMin(min);
  setMax(max);
  this->diff = max-min; 
  this->key = 1;
  //printf(values);
  setseed(values);
}

TRNG::TRNG(int min,int max){

  if(max<min){
    int c = max;
    max = min;
    min = c;
  }
  setMin(min);
  setMax(max);
  this->diff = max-min;
  this->key = 1;

}

void TRNG::setseed(Flags values){

  if(values & NONE){
    key = 1;
  }
}

int TRNG::rand(){

  int rand = std::rand()*key;
  int ret = (rand%diff+min);

}

