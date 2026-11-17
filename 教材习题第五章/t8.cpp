#include <iostream>
#include<cmath>
using namespace std;

double f(double);
double S(double,double,int);

int m=1500;
double c=0;
double a,b,ans,h;

int main()
{
    cin>>a>>b;
    double h=(b-a)/m;
    ans=(S(a,b,m)+c)*h;
    cout << ans << endl;
}

double f(double x)
{
    return(cos(x)+x);
}

double S(double x,double y,int z)
{
    double h=(y-x)/z;
    for(int i=1;i<z;i++)
    {
        c=c+f(x+i*h);
    }
    return (f(x)+f(y))/2;
}