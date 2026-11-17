#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100],b[100];
    cin.getline(a,100);
    cin.getline(b,100);
    int length_a=strlen(a);
    int length_b=strlen(b);
    if(length_a>length_b)
    {
        cout<<"invalid input"<<endl;
        return 0;
    }
    int count=0;
    for(int i=0;i<=length_b-length_a;i++)
    {
        for(int j=0;j<length_a;j++)
        {
            if(a[j]!=b[i+j])
            {
                break;
            }
            if(j==length_a-1)
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        cout<<"never appeared"<<endl;
    }
    if(count>0)
    {
        cout<<"appeared "<<count<<" times"<<endl;
    }
    return 0;
}