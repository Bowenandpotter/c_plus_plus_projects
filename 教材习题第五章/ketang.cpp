#include <iostream>
using namespace std;

void withspace(char);
void bit(char);

int main() {
    char c;
    cin >> c;
    withspace(c);
    cout<<' ';
    bit(c);
    cout<<' '<<c<<endl;
    return 0;
}

void withspace(char m)
{
    int n=(int)m;
    cout<<n;
    if(n<10)cout<<"  ";
    else if(n<100)cout<<" ";
}

void bit(char m)
{
    int n=(int)m;
    for(int i=7;i>-1;i--)
    {
        if(n>pow(2,i))
        {
            cout<<1;
            n=n-pow(2,i);
        }
        else
        {
            cout<<0;
        }
    }
}