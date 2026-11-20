#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int pow(int i,int j)
{
    int ans=1;
    for(int t=0;t<j;t++)
    {
        ans=ans*i;
    }
    return ans;
}
int main()
{
    vector<int> a;
    int tem;
    while(cin>>tem)
    {
        a.push_back(tem);
    }
    long long sum=0;
    for(int i=0;i<(int)a.size();i++)
    {
        sum=sum+a[i];
    }
    cout<<sum*pow(2,a.size()-1);
    return 0;
}