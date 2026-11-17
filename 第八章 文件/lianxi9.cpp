#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int>&a,int n,bool (*compare)(int,int))
{
    for(int i=0;i<n-1;i++)
    {
        for(int i=0;i<n-1;i++)
        {
        if(!compare(a[i],a[i+1]))
            {
                int tem=a[i];
                a[i]=a[i+1];
                a[i+1]=tem;
            }
        }
    }
}
bool ascending(int a,int b)
{
    return a<b;
}

bool descending(int a,int b)
{
    return a>b;
}

int main(){
    cout<<"length:";
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>b=a;
    sortArray(a,n,ascending);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    sortArray(b,n,descending);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<' ';
    }
    cout<<endl;
    return 0;
}