#include<iostream>
using namespace std;

struct student
{
    char name[20];
    int chinese;
    int math;
    int english;
    int total;
};

bool is_opponent(student list[],int i,int j)
{
    if(!(list[i].total-list[j].total<=10&&list[i].total-list[j].total>=-10))return false;
    if(!(list[i].chinese-list[j].chinese<=5&&list[i].chinese-list[j].chinese>=-5))return false;
    if(!(list[i].math-list[j].math<=5&&list[i].math-list[j].math>=-5))return false;
    if(!(list[i].english-list[j].english<=5&&list[i].english-list[j].english>=-5))return false;
    return true;
}

int main()
{
    int n;
    cin>>n;
    student *list=new student[n];
    for(int i=0;i<n;i++)
    {
        cin>>list[i].name>>list[i].chinese
        >>list[i].math>>list[i].english;
    }
    for(int i=0;i<n;i++)
    {
        list[i].total=list[i].chinese+list[i].math+list[i].english;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(is_opponent(list,i,j))
            {
                cout<<list[i].name<<' '<<list[j].name<<endl;
            }
        }
    }
    delete[] list;
    return 0;
}