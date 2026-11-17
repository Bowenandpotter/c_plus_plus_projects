#include <iostream>
#include<cmath>
using namespace std;

bool isprime(int);

int findmax(int);

int main(){
    int x,s[100]={0},max;//max表示质因数最多有多少个
    cin >> x;
    int j=x;
    if(x<1)
    {
        cout<<"invalid input"<<endl;
        return 0;
    }
    if(x==1)
    {
        cout<<1<<endl;
        return 0;
    }
    while(j!=1)
    {
        for(int i=2;i<=x;i++)
        {
            if(j%i==0 && isprime(i) && j>=i)
            {
                for(int p=0;p<100;p++)//将i储入s
                {
                    if(s[p]==0)
                    {
                        s[p]=i;
                        break;
                    }
                }
                j=j/i;
                break;
            }
        }
    }
    for(int i=0;i<100;i++)
    {
        if(s[i]!=0)
        {
            cout<<s[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}

bool isprime(int q)
{
    for(int m=2;m<=sqrt(q);m++)
    {
        if(q%m==0)
        {
            return false;
        }
    }
    return true;
}