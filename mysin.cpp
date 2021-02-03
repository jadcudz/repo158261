#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


class MySin {
    public: MySin();
    public: MySin(double x);
    public: MySin(const MySin &obj);
    public: ~MySin();
    public: double value();
    public: void setX(double);
    public: double getX();
    private: double mX;
};



int fac(int x)
{
int i,fac=1;
for(i=1;i<=x;i++)
fac=fac*i;
return fac;
};



double value(float x) {
    
float sum=0;
int i,j,limit;

limit = 10;
x = x*(3.1415/180);

for(i=1,j=1;i<=limit;i++,j=j+2)
{
if(i%2!=0)
{
sum+=pow(x,j)/fac(j);
}
else
sum-=pow(x,j)/fac(j);
}
return sum;
};



int main () {
  cout << value(90.0);
  return 0;
}
