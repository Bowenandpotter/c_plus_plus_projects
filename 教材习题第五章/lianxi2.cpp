#include <iostream>
#include<cmath>
using namespace std;

bool is1(int);
bool is2(int);

int main(){
    int s[100]={0};
    for(int i=2;i<=100;i++)
    {
        if(is1(i)&&is2(i))
        {
            for(int j=0;j<100;j++)
            {
                if(s[j]==0)
                {
                    s[j]=i;
                    break;
                }
            }
        }
    }
    for(int m = 0 ; m <100;m++)
    {
        if(s[m]!=0)cout<<s[m]<<" ";
    }
    cout<< endl;
    return 0;
}
bool is1(int p)
{
    if(p%4==1)return true;
    return false;
}
bool is2(int q)
{
    for(int i=2; i<= sqrt(q);i++)
    {
        if(q%i ==0)return false;
    }
    return true;
}