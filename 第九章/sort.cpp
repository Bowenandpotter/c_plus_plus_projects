#include<iostream>
#include<vector>
using namespace std;

void sort(int *b,int m,int j)
{
    if(m>=j)
    {
        return;
    }
    int x=m,y=j;
    int key=b[m];
    do
    {
        while (x<y&&b[y]>key)
        {
            /* code */
            y--;
        }
        if(x<y)
        {
            b[y]=b[x];
            x++;
        }
        while (x<y&&b[x]<key)
        {
            /* code */
            x++;
        }
        if(x<y)
        {
            b[x]=b[y];
            y--;
        }
    } while (x!=y);
    b[x]=key;
    sort(b,m,x-1);
    sort(b,x+1,j);
}

int main()
{
    cout<<"输入若干个想要排序的数:";
    vector<int>a;
    int tem;
    while(cin>>tem)
    {
        a.push_back(tem);
    }
    int length=a.size();
    int *b=new int[length];
    for(int i=0;i<length;i++)
    {
        b[i]=a[i];
    }
    sort(b,0,length-1);
    for(int i=0;i<length;i++)
    {
        cout<<b[i]<<' ';
    }
    delete[] b;
    return 0;
}