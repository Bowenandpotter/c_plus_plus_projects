#include <iostream>
#include<cmath>
using namespace std;

bool condition1(int);
bool condition2(int);

int main(){
    int num;
    cin>>num;
    int s[100];
    for(int i=0;i<num;i++)
    {
        cin>>s[i];
    }
    int k=0,j=0;
    if(condition1(s[0])&&condition2(s[0]))
    {
        j=j+s[0];
        k++;
    }
    for(int i=1;i<num;i++)
    {
        if(k>=10)break;
        if(condition1(s[i])&&condition2(s[i]))
        {
            j=j+s[i];
            k++;
        }
        if(s[i]==-1)break;
    }
    cout<<j;
    return 0;
}

bool condition1(int i)
{
    if(i%3==0||i%5==0)
    {
        return true;
    }
    return false;
}

bool condition2(int j)
{
    if(j<1000)return true;
    return false;
}