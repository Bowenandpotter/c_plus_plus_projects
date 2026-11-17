#include<iostream>
using namespace std;
// 第一行两个整数 N 和 M ，分别表示台阶级数和坏台阶数量。
// 下面 M 行输入，每行一个整数表示坏台阶级数。
int main(){
    int n,m;
    cin>>n>>m;
    bool broken[101]={false};
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        broken[a]=true;
    }
    long long steps[101]={0};
    steps[0]=1;
    for(int i=1;i<n+1;i++)
    {
        if(broken[i])
        {
            steps[i]=0;
        }
        else if(i==1)
        {
            steps[i]=1;
        }
        else
        {
            steps[i]=steps[i-1]+steps[i-2];
        }
    }
    cout<<steps[n]<<endl;
    return 0;
}