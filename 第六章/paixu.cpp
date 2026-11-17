#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>s;
    int x;
    while(cin>>x)
    {
        s.push_back(x);
    }
    int n=s.size();
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(s[j]>s[j+1])
            {
                int mid=s[j];
                s[j]=s[j+1];
                s[j+1]=mid;
            }
        }
    }
    cout<<s[0];
    for(int i=1;i<n;i++)
    {
        cout<<' '<<s[i];
    }
    return 0;
}