// 徐老师有A，B，C，D四个得意门生，在中秋节他收到一份礼物，十分高兴，但不知道是谁送的。徐老师询问了四个学生，得到了如下答案： 
// A：不是我送的礼物 
// B：是我送的礼物 
// C：不是B送的礼物 
// D：是C送的礼物
// 已知四个学生中只有一个说了假话，那么到底是谁送的礼物呢？

#include <iostream>
using namespace std;

int main(){
    bool s[4]={0};//s[i]表示认为第i个人送的礼物
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            s[j]=0;
        }
        s[i]=1;
        int total=(s[0]!=1)+(s[1]==1)+(s[1]!=1)+(s[2]==1);
        if(total==3)
        {
            for(int p=0;p<4;p++)
            {
                if(s[p]==1)
                {
                    cout<<char(int('A')+p);
                }
            }
        }
    }
    return 0;
}