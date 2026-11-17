#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<"length:"<<s.length()<<endl;
    cout<<"first character:"<<s[0]<<"   "
    <<"last character:"<<s[s.length()-1]<<endl;
    s[0]='A';
    cout<<s<<endl;
    return 0;
}