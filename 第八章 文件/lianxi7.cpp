#include<iostream>
#include<vector>
using namespace std;

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int calculate(int a,int b,int(*p)(int,int))
{
    return (*p)(a,b);
}

int main(){
    int (*p)(int,int);
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='+')p=add;
    else if(c=='-')p=sub;
    else if(c=='*')p=mul;
    else{
        cout<<"invalid input"<<endl;
        return 0;
    }
    cout<<calculate(a,b,p)<<endl;
    return 0;
}