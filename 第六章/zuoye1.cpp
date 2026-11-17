#include <iostream>
using namespace std;
bool checkSpecial(int i, int n);      // 未定义，需要完成

int main() {
    int n;
    cin >> n;
    for (int i = 10000; i < 1000000; i ++) {
        if (checkSpecial(i, n)) {
            cout << i << endl;
        }
    }
    return 0;
}

bool checkSpecial(int i,int n)
{
    if(i<100000)
    {
        int s[5],sum=0;
        for(int m=0;m<5;m++)
        {
            int t=1;
            for(int j=1;j<=4-m;j++)
            {
                t=t*10;
            }
            s[m]=int(i/t) %10;
            sum=sum+s[m];
        }
        if(s[0]==s[4]&&s[1]==s[3]&&sum==n)
        {
            return true;
        }
        else{
            return false;
        }
    }
    else
    {
        int s[6],sum=0;
        for(int m=0;m<6;m++)
        {
            int t=1;
            for(int j=1;j<=5-m;j++)
            {
                t=t*10;
            }
            s[m]=int(i/t) %10;
            sum=sum+s[m];
        }
        if(s[0]==s[5]&&s[1]==s[4]&&s[2]==s[3]&&sum==n)
        {
            return true;
        }
        else{
            return false;
        }
    }
}