// 夏日炎炎，空调机走俏。5家空调机厂的产品在一次质量评比活动中分获前5名。评前大家就已知道E厂的产品肯定不是第2名和第3名。
// A厂的代表猜：E厂的产品稳获第1名。
// B厂的代表猜：我厂可能获第2名。
// C厂的代表猜：A厂的质量最差。
// D厂的代表猜：C厂的产品不是最好的。
// E厂的代表猜：D厂会获第1名。
// 评比结果公布后发现，只有获第1名和第2名的两个厂的代表猜对了。请编程给出A、B、C、D、E各是第几名？

#include <iostream>
using namespace std;

bool invalid(int a,int b,int c,int d,int e);

bool valid(int a,int b,int c,int d,int e);

int main(){
    int a,b,c,d,e;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            for(c=1;c<=5;c++)
            {
                for(d=1;d<=5;d++)
                {
                    for(e=1;e<=5;e++)
                    {
                        if(invalid(a,b,c,d,e))continue;
                        if(e==2||e==3)continue;
                        if(valid(a,b,c,d,e))
                        cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
                    }
                }
            }
        }
    }
    return 0;
}

bool invalid(int a,int b,int c,int d,int e)
{
    if(a==b||a==c||a==d||a==e||b==c||b==d||b==e||c==d||c==e||d==e)return true;
    return false;
}
// 夏日炎炎，空调机走俏。5家空调机厂的产品在一次质量评比活动中分获前5名。评前大家就已知道E厂的产品肯定不是第2名和第3名。
// A厂的代表猜：E厂的产品稳获第1名。
// B厂的代表猜：我厂可能获第2名。
// C厂的代表猜：A厂的质量最差。
// D厂的代表猜：C厂的产品不是最好的。
// E厂的代表猜：D厂会获第1名。
// 评比结果公布后发现，只有获第1名和第2名的两个厂的代表猜对了。请编程给出A、B、C、D、E各是第几名？
bool valid(int a,int b,int c,int d,int e)
{
    bool aa,bb,cc,dd,ee;
    aa=((a==1||a==2)&&e==1);
    bb=((b==1||b==2)&&b==2);
    cc=((c==1||c==2)&&a==5);
    dd=((d==1||d==2)&&c!=1);
    ee=((e==1||e==2)&&d==1);
    bool aaa,bbb,ccc,ddd,eee;
    aaa=((a!=1&&a!=2)&&e!=1);
    bbb=((b!=1&&b!=2)&&b!=2);
    ccc=((c!=1&&c!=2)&&a!=5);
    ddd=((d!=1&&d!=2)&&c==1);
    eee=((e!=1&&e!=2)&&d!=1);
    if((aa||aaa)&&(bb||bbb)&&(cc||ccc)&&(dd||ddd)&&(ee||eee))return true;
    else return false;
}