#include <cstdlib>
#include <time.h>
#include <iostream>
#include <cstdlib>

#include "rng.h"

int TRNG::getMin(){ return min; }
int TRNG::getMax(){ return max; }
int TRNG::getDiff(){ return diff; }
void TRNG::setMin(int a){ min = a; setdiff(); }
void TRNG::setMax(int a){ max = a; setdiff(); }
void TRNG::setdiff(){ this->diff = max-min; }

void TRNG::swap(int *a, int *b){
  if(*a>*b){
    int c = *a;
    *a = *b;
    *b = c;
  }
}

void TRNG::setup(int *min,int *max){
  swap(min,max);
  setMin(*min);
  setMax(*max);
  this->diff = *max-*min;
  this->key = 1;
}

TRNG::TRNG(int min,int max,Flags values){
  setup(&min,&max);
  //printf(values);
  setseed(values);
}

TRNG::TRNG(int min,int max){
  setup(&min,&max);
}

void TRNG::setseed(Flags values){

  if(!values){
    key = 1;
  }
  if(values & NONE){
    key = 1;
  }
}

int TRNG::rand(){

  int rand = std::rand()*key;
  //std::cout << diff << std::endl;
  int ret = (rand%diff+min);

}
