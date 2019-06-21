#include <iostream>
#include "rng.h"

using namespace std;

int main(){

  TRNG a(5,98);
  cout << a.getMin() << " " << a.getMax() << " " << a.getDiff() << endl;
  TRNG b(100,98);
  cout << b.getMin() << " " << b.getMax() << " " << b.getDiff() << endl;
  cout << "\n";
  TRNG c(100,0);
  for(int i = 0;i < 10;i++){
    cout << c.rand() << endl;
  }
  TRNG d();

  return 0;
}
