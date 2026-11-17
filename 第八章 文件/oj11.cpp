#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    if(a=="")
    {
        cout<<1<<endl;
        return 0;
    }
    vector<char>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            b.push_back(char(a[i]+'a'-'A'));
        }
        else if((a[i]>='a'&&a[i]<='z')||(a[i]>='0'&&a[i]<='9'))
        {
            b.push_back(a[i]);
        }
    }
    int lengthb=b.size();
    if(lengthb==0)
    {
        cout<<1<<endl;
        return 0;
    }
    bool huiwen=1;
    for(int i=0;i<=lengthb/2;i++)
    {
        if(b[i]!=b[lengthb-1-i])
        {
            huiwen=0;
            break;
        }
    }
    if(huiwen==1)
    {
        cout<<1<<endl;
    }
    if(huiwen==0)
    {
        cout<<0<<endl;
    }
    return 0;
}