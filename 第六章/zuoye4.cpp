#include <iostream>
using namespace std;

bool invalid(int s[]);
void output(int p);
// A、B、C是小学老师，各教2门课，互不重复。共有如下6门课：语文、算术、政治、地理、音乐和美术。已知：
// （1）政治老师2和算术老师1是邻居。
// （2）地理老师3比语文老师0年龄大。
// （3）B 最年轻。b不是地理老师,s[3]!=1
// （4）A 经常对地理老师3和算术老师1这两个人讲他看过的文学作品。s[3]!=0 s[1]!=0，s[3]!=s[1]
// （5）B 经常和音乐老师4、语文老师0这两个人一起游泳。s[4]!=1 s[0]!=1,s[4]!=s[0]
// 请编程输出 A、B、C各教哪两门课
int main(){
    int s[6]={0};//0-5:语文0、算术1、政治2、地理3、音乐4和美术5   0-2:A、B、C
    for(s[0]=0;s[0]<3;s[0]++)
    {
        for(s[1]=0;s[1]<3;s[1]++)
        {
            for(s[2]=0;s[2]<3;s[2]++)
            {
                for(s[3]=0;s[3]<3;s[3]++){
                    for(s[4]=0;s[4]<3;s[4]++){
                        for(s[5]=0;s[5]<3;s[5]++){
                            if(invalid(s))continue;
                            if((s[2]!=s[1])&&(s[3]!=s[0])&&(s[3]!=1)&&(s[3]!=0)&&(s[1]!=0)&&(s[4]!=1)&&(s[0]!=1)&&(s[3]!=s[1])&&(s[4]!=s[0]))
                            {
                                int j=0;
                                for(int p=0;p<6;p++)
                                {
                                    if(s[p]==0)
                                    {
                                        output(p);
                                        if(j==0)
                                        {
                                            cout<<' ';
                                            j++;
                                        }
                                    }
                                    
                                }
                                cout<<endl;
                                int q=0;
                                for(int p=0;p<6;p++)
                                {
                                    if(s[p]==1)
                                    {
                                        output(p);
                                        if(q==0)
                                        {
                                            cout<<' ';
                                            j++;
                                        }
                                    }
                                    
                                }
                                cout<<endl;
                                int r=0;
                                for(int p=0;p<6;p++)
                                {
                                    if(s[p]==2)
                                    {
                                        output(p);
                                        if(r==0)
                                        {
                                            cout<<' ';
                                            r++;
                                        }
                                    }
                                    
                                }
                                cout<<endl<<endl;
                                
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
bool invalid(int s[])
{
    int x=0,y=0,z=0;
    for(int j=0;j<6;j++)
    {
        if(s[j]==0)x++;
        if(s[j]==1)y++;
        if(s[j]==2)z++;
    }
    if(x==2&&y==2&&z==2)return false;
    return true;
}
//语文、算术、政治、地理、音乐和美术
void output(int p)
{
    if(p==0)cout<<"语文";
    if(p==1)cout<<"美术";
    if(p==2)cout<<"政治";
    if(p==3)cout<<"地理";
    if(p==4)cout<<"音乐";
    if(p==5)cout<<"算数";
}