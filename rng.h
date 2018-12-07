#ifndef RNG_H
#define RNG_H

class TRNG{
  public:
    
    enum flag;

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
