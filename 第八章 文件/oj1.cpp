#include<iostream>
#include<vector>
using namespace std;
// 第一行两个整数 N 和 M ，分别表示台阶级数和坏台阶数量。
// 下面 M 行输入，每行一个整数表示坏台阶级数。
long long f(int n)
{
    if(n==1){return 1;}
    else if(n==2){return 2;}
    else if(n==0){return 1;}
    else{return f(n-1)+f(n-2);}
}
int*sequence(int a[],int m)
{
    int*b=new int[m];
    for(int i=0;i<m;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(b[j]>b[j+1])
            {
                int tem;
                tem=b[j];
                b[j]=b[j+1];
                b[j+1]=tem;
            }
        }
    }
    return b;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int*b=sequence(a,m);
    if(b[0]==0||b[m-1]==n)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<m-1;i++)
    {
        if(b[i+1]-b[i]==0)
        {
            cout<<0<<endl;
            return 0;
        }
    }
    long long total=1;
    total=total*f(b[0]-1)*f(n-b[m-1]-1);
    for(int i=1;i<m;i++)
    {
        total=total*f(b[i]-b[i-1]);
    }
    cout<<total<<endl;
    delete[]b;
    return 0;
}