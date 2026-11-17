#include <iostream>
#include<cmath>
using namespace std;

int startingdate(int);//计算该年一月一日星期几

int main()
{
    int year;
    cin>>year;
    cout<<"01";
    int date=1;
    for(int i=0;i<startingdate(year)-1;i++)
    {
        cout<<"   ";
    }
    for(int j=1;j<=8-startingdate(year);j++)
    {
        printf("%3d",j);
        date++;
    }
    cout<<endl;
    for(int m = 0;m<7;m++)
    {
        int dateleft=31-date;
        if(dateleft<7)cout<<"02";
        else{cout<<"  ";}
        for(int i=0;i<7;i++)
        {
            printf("%3d",date);
            date++;
            if(date>31)break;
        }
        if(date>31)break;
        cout<<endl;
    }
    int total_date;
    for(int month=2;month<=12;month++)
    {
        if(month==4||month==6||month==9||month==11)total_date=30;
        else if(month==2&&(year%4==0))total_date=29;
        else if(month==2&&(year%4!=0))total_date=28;
        else total_date=31;
        int date2=1;
        for(int m = 0;m<5;m++)
        {
            int dateleft2=total_date-date2;
            for(int i=0;i<7;i++)
            {
                printf("%3d",date2);
                date2++;
                if(date2>total_date)break;
            }
            if(dateleft2<7&&month<=11)
            {
                printf("%2d",month+1);
            }
            else
            {
                cout<<endl;
                cout<<"  ";
            }
            if(date2>total_date)break;
        }
    }
    return 0;
}

int startingdate(int x)
{
    if(x==2023)return 7;
    else
    {
        int total=0;
        for(int i=2023;i<x;i++)
        {
            total=total+((i%4==0)?366:365);
        }
        return total%7==0?7:total%7;
    }
}