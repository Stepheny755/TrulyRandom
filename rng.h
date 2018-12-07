#ifndef RNG_H
#define RNG_H

class TRNG{
  public:
    TRNG(int min,int max,FLAG values);
    
    enum FLAG{
  	CURRENT_TIME = 1<<0;
	EXECUTE_TIME = 1<<1;
	CPU_TEMP     = 1<<2;
	WIFI_SPEED   = 1<<3;
    };

    int rand();

    int getMin(int){return min;}
    int getMax(int){return max;}
    void setMin(int a){min=a;}
    void setMax(int a){max=a;}
  private:
    void setkey(FLAG values);
    int min,max,diff;
    int key;



};

#endif
