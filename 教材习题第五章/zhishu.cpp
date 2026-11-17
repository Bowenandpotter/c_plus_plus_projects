#include <iostream>
#include<cmath>
using namespace std;

bool isprime(int);

int main(){
    int number,s[100]={0};
    cin >> number;
    for(int i=0;i<number;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<number;i++)
    {
        if(!isprime(s[i]))
        {
            s[i]=0;
        }
    }
    for(int i=0;i<number;i++)
    {
        if(s[i]!=0)
        {
            cout<<s[i]<<" ";
        }
    }
    return 0;
}

bool isprime(int a)
{
    if(a<2)return false;
    for(int j=2;j<=sqrt(a);j++)
    {
        if(a%j==0)return false;
    }
    return true;
}