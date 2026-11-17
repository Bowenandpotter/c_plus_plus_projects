#include<iostream>
#include<string>
#include<cstring>
using namespace std;
// 输入一个用户名，完成以下操作：
// 1. 删除用户名开头和末尾的所有空格。
// 2. 将用户名中的所有大写英文字母转换为小写。
// 3. 如果用户名中包含空格，将所有空格替换成下划线 _。
// 4. 输出最终用户名。
int main(){
    cout<<"User ID:";
    string s;
    getline(cin,s);
    while(s[0]==' ')
    {
        s.erase(0,1);
    }
    while(s[s.length()-1]==' ')
    {
        s.erase(s.length()-1,1);
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=char(s[i]+'a'-'A');
        }
        if(s[i]==' ')s[i]='_';
    }
    cout<<"Final ID:"<<s<<endl;
    return 0;
}