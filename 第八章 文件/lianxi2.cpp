#include<iostream>
#include<string>
#include<cstring>
using namespace std;
// 英文字母的数量。
// 数字的数量。
// 空格的数量。
bool is_letter(string s,int i)
{
    if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
    {
        return true;
    }
    return false;
}
bool is_digits(string s,int i)
{
    if(s[i]>='0'&&s[i]<='9')
    {
        return true;
    }
    return false;
}
int main(){
    string s;
    getline(cin,s);
    int m=s.length(),letters=0,digits=0,spaces=0,others=0;
    for(int i=0;i<m;i++)
    {
        if(is_letter(s,i))letters++;
        else if(is_digits(s,i))digits++;
        else if(s[i]==' ')spaces++;
        else others++;
    }
    cout<<"letters"<<letters<<endl;
    cout<<"digits"<<digits<<endl;
    cout<<"spaces"<<spaces<<endl;
    cout<<"others"<<others<<endl;
    return 0;
}