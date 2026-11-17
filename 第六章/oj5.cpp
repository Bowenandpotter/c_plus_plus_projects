#include <iostream>
using namespace std;

// 可运用筛法思想，不要依次对每个数进行因数分解

// 对于不同n可开一个大数组（如int a[10 000 000]）使范围内数据能全部放入，每次只用前n位

// 由于数组长度较大，可将其定义为全局变量（在main函数外定义）
int a[10000000]={0};

int main(){
    int n;
    cin>>n;
    int i=2;
    while(i*i<=n)
    {
        int j=1;
        while(j*i*i<=n)
        {
            a[j*i*i]=1;
            j++;
        }
        i++;
    }
    int ans=0;
    for(int m=1;m<=n;m++)
    {
        if(a[m]==1)ans++;
    }
    cout<<n-ans<<endl;
    return 0;
}