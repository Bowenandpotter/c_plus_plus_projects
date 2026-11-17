#include<iostream>
#include<string>
#include<cstring>
using namespace std;
// 输入三个字符串：
// - 原字符串 s
// - 要查找的字符串 a
// - 替换成的字符串 b
// 将 s 中所有出现的 a 替换成 b。
int main(){
    string s,a,b;
    cout<<"initial string:";
    getline(cin,s);
    cout<<"string to change:";
    getline(cin,a);
    cout<<"string after change:";
    getline(cin,b);
    int p=s.find(a,0);
    if(p==string::npos)
    {
        cout<<"not found"<<endl;
        return 0;
    }
    s.replace(p,a.length(),b);
    while(1){
        p=p+b.length();
        if(s.find(a,p)==string::npos)break;
        p=s.find(a,p);
        s.replace(p,a.length(),b);
    }
    cout<<"changed string"<<s<<endl;
    return 0;
}