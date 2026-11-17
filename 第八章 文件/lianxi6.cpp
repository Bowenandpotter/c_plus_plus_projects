#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl<<sum<<endl;
    return 0;
}