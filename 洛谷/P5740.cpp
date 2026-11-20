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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(list[j].total<list[j+1].total)
            {
                student tep=list[j];
                list[j]=list[j+1];
                list[j+1]=tep;
            }
        }
    }
    cout<<list[0].name<<' '<<list[0].chinese
    <<' '<<list[0].math<<' '<<list[0].english;
    delete[] list;
    return 0;
}