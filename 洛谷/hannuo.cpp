#include<iostream>
using namespace std;

int steps=1;

void move(int n,char x,char y,char z)
//表示将n个盘子从x经过y移到z
{
    if(n==1)
    {
        cout<<"step"<<steps<<':'<<x<<" to "<<z<<endl;
        steps++;
    }
    else
    {
        move(n-1,x,z,y);
        cout<<"step"<<steps<<':'<<x<<" to "<<z<<endl;
        steps++;
        move(n-1,y,x,z);
    }
}

int main()
{
    int n;
    cin>>n;
    move(n,'A','B','C');
    cout<<"total steps:"<<steps-1<<endl;
    return 0;
}