// 输入两个字符串 a 和 b。
// 1. 输出两个字符串拼接后的结果，中间用一个空格隔开。
// 2. 判断两个字符串是否相同。
// 3. 判断哪个字符串的字典序更大。
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    c=a+' '+b;
    cout<<c<<endl;
    if(a==b)cout<<"Same"<<endl;
    else cout<<"Different"<<endl;
    cout<<(a>b?a:b)<<endl;
    return 0;
}