#include<iostream>
using namespace std;

int main(){
    int a[7][100] = {0};
    int n;
    cin >> n;//total number
    for(int i = 1; i <= n ; i ++)
    {
        int j = i;
        for(int x = 0 ; x < 7 ; x ++)
        {
            if(j % 2 ==1)
            {
                for(int m = 0 ; m < 100 ; m++)
                {
                    if(a[x][m] == 0)
                    {
                        a[x][m] = i;
                        break;
                    }
                }
            }
            j = j / 2;
        }
    }
    for(int l = 0 ; l < 7 ; l ++)
    {
        cout << "第" << l+1 << "个卡片上的数字有：" << endl;
        for(int k = 0 ; k < 100 ; k ++)
        {
            if(a[l][k] != 0)
            {
                cout << a[l][k] << endl;
            }
        }
    }
    return 0;
}