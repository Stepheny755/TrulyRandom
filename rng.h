#ifndef RNG_H
#define RNG_H

enum Flags{
  NONE    = 0,
  
  CURTIME = 1<<0,
  EXETIME = 1<<1,
  CPUTIME = 1<<2,
  WIFISPD = 1<<3,

  ALL     = 16
};

class TRNG{
  public:

    TRNG(int min,int max,Flags values);
    TRNG(int min,int max);

    int rand();

    int getMin(int);
    int getMax(int);
    void setMin(int a);
    void setMax(int a);

  private:

    void setseed(Flags values);
    void setdiff();

    int min,max,diff;
    int keymin,keymax;

    int key;



};

#endif
