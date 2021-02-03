#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/**
* \defgroup test1 GRUPA1 (Jakaś nazwa grupy)
* \(
*/


/**
* \brief Klasa MySin z deklarowanymi zmiennymi
*/

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


/**
* \brief funkcja fac z jednym argumentem - funkcja liczy silnię liczby
*
* \param[in] x - 
*   parametr pierwszy x jako liczba naturalna z której liczymy silnię
*
* \return
*    - fac => zwracana silnię wybranej liczny
*/

int fac(int x)
{
int i,fac=1;
for(i=1;i<=x;i++)
fac=fac*i;
return fac;
};


/**
* \brief funkcja value z jednym argumentem liczby zmiennoprzecinkowej
*
* \param[in] x - 
*   parametr pierwszy x jako liczba zmiennoprzecinkowa z której policzymy wartość przybliżoną sinus na podstawie szeregu Taylora
*
* \return
*    - sum => zwraca przybliżoną wartość sinus
*/

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


/**
* \brief funkcja main jako funkcja główna działania programu
*/

int main () {
  cout << value(90.0);
  return 0;
}
