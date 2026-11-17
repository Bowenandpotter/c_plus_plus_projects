#include<iostream>
using namespace std;

int main(){
    int p[68]={0};
    for (int i=32;i<=99;i++)
    {
        int s[4]={0};
        int l=i*i;
        for(int j=0;j<4;j++)
        {
            
            s[j]=l%10;
            l=l/10;
        }
        if(s[0]>s[1]&&s[1]>s[2]&&s[2]>s[3])
        {
            p[i-32]=1;
        }
    }
    for(int m=0;m<68;m++)
    {
        if(p[m]==1)
        cout<<(m+32)*(m+32)<<" ";
    }
}