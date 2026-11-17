#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
 
// 补充函数 format_line

char *format_line(char input_line[])
{
    char*a=new char[100];
    int start,end;
    for(int i=0;i<100;i++)
    {
        if(input_line[i]!=' ')
        {
            start=i;
            break;
        }
    }
    for(int i=99;i>-1;i--)
    {
        if(input_line[i]!=' ')
        {
            end=i;
            break;
        }
    }
    int j=0;
    int upper=1;
    for(int i=start;i<=end;)
    {
        if(upper==1&&input_line[i]!=' ')
        {
            a[j]=toupper(input_line[i]);
            upper--;
            j++;
            i++;
        }
        else if(input_line[i]==' ')
        {
            a[j]=' ';
            j++;
            upper++;
            while(input_line[i]==' ')
            {
                i++;
            }
        }
        else
        {
            a[j]=tolower(input_line[i]);
            i++;
            j++;
        }
    }
    return a;
}
 
int main()
{
    char input_line[100];
    cin.getline(input_line, 100);
 
    char* result_str = format_line(input_line);
    cout << result_str << endl;
     
    delete[] result_str;
    return 0;
}