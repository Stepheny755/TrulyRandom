#ifndef RNG_H
#define RNG_H

class TRNG{
  public:
    TRNG(int min,int max);
    TRNG();

    int rand();

    int getMin(int){return min;}
    int getMax(int){return max;}
    void setMin(int a){min=a;}
    void setMax(int a){max=a;}
  private:
    void setkey(FLAG values);
    int min,max,diff;
    int key;
    enum FLAG;

};

#endif
