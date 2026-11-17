#include<iostream>
#include<vector>
using namespace std;

int doublevalue(int x)
{
    return 2*x;
}

int squarevalue(int x)
{
    return x*x;
}

void process(vector<int>& a,int n,int(*p)(int))
{
    for(int j=0;j<n;j++)
    {
        a[j]=p(a[j]);
    }
}

int main(){
    cout<<"length:";
    int n;
    cin>>n;
    vector<int>a(n);
    cout<<"numbers:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>b=a;
    process(a,n,doublevalue);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    process(b,n,squarevalue);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<' ';
    }
    return 0;
}