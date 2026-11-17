#include <iostream>
using namespace std;

int count_valley(const int a[], int n)
{
    // 填空1：统计波谷个数
    int p=0;
    for(int i=1;i<=n-2;i++)
    {
        if(a[i-1]>a[i]&&a[i]<a[i+1])p++;
    }
    return p;
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i ++) cin >> a[i];

    // 调用函数返回波谷个数
    cout << count_valley(a, n) << endl;

    delete[] a;
    return 0;
}