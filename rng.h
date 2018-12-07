#ifndef RNG_H
#define RNG_H

enum flag{
  curtime = 1<<0;
  exetime = 1<<1;
  cputemp = 1<<2;
  wifispd = 1<<3;
};

class TRNG{
  public:

    TRNG(int min,int max,flag values);

    int rand();

    int getMin(int);
    int getMax(int);
    void setMin(int a);
    void setMax(int a);
  private:
    void setkey(flag values);
    int min,max,diff;
    int key;



};

#endif
