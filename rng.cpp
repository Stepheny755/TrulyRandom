#include <cstdlib>
#include <time.h>
#include <iostream>

#include "rng.h"

int getMin(int){ return min; }
int getMax(int){ return max; }
void setMin(int a){ min = a; }
void setMax(int a){ max = a; }

enum flag{
  curtime  = 1<<0;
	exetime  = 1<<1;
	cputemp  = 1<<2;
	wifispd  = 1<<3;
};

TRNG::TRNG(int min,int max,flag values){

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

