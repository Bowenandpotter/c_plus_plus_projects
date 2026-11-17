#include <iostream>
#include<cmath>
using namespace std;

double mysin(double);
double mycos(double);
double jiecheng(int);

int main()
{
    double x;
    cin >> x;
    if(x<0)
    {
        do
        {
            x=x+2*M_PI;
            /* code */
        } while (x<0);
    }
    else if(x>2*M_PI)
    {
        do
        {
            x=x-2*M_PI;
            /* code */
        } while (x>2*M_PI);
        
    }
    cout << "sin(x)=" << mysin(x) << endl;
    cout<<"cos(x)="<<mycos(x)<<endl;
}

double mysin(double m)
{
    double ans=0;
    int k=1,p=0;
    do
    {
        ans=ans+pow(m,k)/jiecheng(k)*pow(-1,p);
        k=k+2;
        p=p+1;
        /* code */
    } while (pow(m,k)/jiecheng(k)>0.00001);
    return ans;
}

double mycos(double n)
{
    
    if(n<M_PI/2 ||n>3*M_PI/2)
    {
        return sqrt(1-mysin(n)*mysin(n));
    }
    else
    {
        return -sqrt(1-mysin(n)*mysin(n));
    }
}

double jiecheng(int j)
{
    int ans=1;
    for(int i=j;i>1;i--)
    {
        ans=ans*i;
    }
    return ans;
}