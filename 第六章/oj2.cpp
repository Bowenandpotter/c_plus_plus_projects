#include <iostream>
#include <cstring>
using namespace std;
 
// 统计原字符串中字母、数字、非字母非数字的个数
void count_chars(const char a[], int *p_letter, int *p_digit, int *p_other)
{
    // 填补代码 ①
    int i=0;
    while(a[i]!='\0'){
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            (*p_letter)++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            (*p_digit)++;
        }
        else{
            (*p_other)++;
        }
        i++;
    }
}
 
// 将小写改大写，大写保持不变，数字变为#，其他变为.
void process_chars(char a[])
{
    // 填补代码 ②
    int i=0;
    while(a[i]!='\0'){
        if((a[i]>='a'&&a[i]<='z'))
        {
            a[i]=char(a[i]+'A'-'a');
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            a[i]='#';
        }
        else if(a[i]>='A'&&a[i]<='Z');
        else{
            a[i]='.';
        }
        i++;
    }
}
 
int main()
{
    char s[100];
    cin.getline(s, 100);
 
    int letters = 0, digits = 0, others = 0;
    count_chars(s, &letters, &digits, &others);
 
    process_chars(s);
    cout << s << endl;
 
    cout << "Letters: " << letters
         << ", Digits: " << digits
         << ", Others: " << others;
    return 0;
}