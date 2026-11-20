#include<iostream>
#include<iomanip>
using namespace std;

void print(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<left<<setw(3)<<a[i][j];
        }
        cout<<endl;
    }
}

void fill(int a[][100],int begin,int n,int position)
//begin表示填写的第一个数的大小，n表示总大小
//position表示从a[i][i]开始填写
{
    if (n==1)
    {
        a[position][position]=begin;
    }
    else if (n==2)
    {
        a[position][position]=begin;
        a[position+1][position]=begin+1;
        a[position+1][position+1]=begin+2;
        a[position][position+1]=begin+3;
    }
    else
    {
        int num=begin;
        for(int i=0;i<n;i++)
        {
            a[position+i][position]=num;
            num++;
        }
        for(int i=1;i<n;i++)
        {
            a[position+n-1][position+i]=num;
            num++;
        }
        for(int i=n-2;i>=0;i--)
        {
            a[position+i][position+n-1]=num;
            num++;
        }
        for(int i=n-2;i>=1;i--)
        {
            a[position][position+i]=num;
            num++;
        }
        fill(a,num,n-2,position+1);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[100][100]={};
    fill(a,1,n,0);
    print(a,n);
    return 0;
}