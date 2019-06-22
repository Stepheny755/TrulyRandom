#include <iostream>
#include "rng.h"

using namespace std;

int main(){

  TRNG c(100,0,CURTIME|EXETIME);
  for(int i = 0;i < 10;i++){
    cout << c.rand() << endl;
  }

  return 0;
}
