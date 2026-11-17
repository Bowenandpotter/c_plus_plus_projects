#include<iostream>
using namespace std;

int main(){
    for(int a = 1 ; a <= 5 ; a++)
        for(int b = 1 ; b <= 5 ; b++)
            for(int c = 1 ; c <= 5 ; c++)
                for(int d = 1 ; d <= 5 ; d++)
                    for(int e = 1 ; e <= 5 ; e++)
                    {
                        if(a == b || a == c || a == d || a == e ||
                            b == c || b == d || b == e ||
                            c == d || c == e ||
                            d == e)
                        {
                            continue;
                        }
                        if(((b==2)+(a==3)==1)&&((b==2)+(e==4)==1)&&((c==1)+(d==2)==1)&&((c==5)+(d==3)==1)&&((e==4)+(a==1)==1))
                        {
                            cout<<"a is number "<< a <<"\nb is number "<< b <<"\nc is number "<< c<<"\nd is number "<< d<<"\ne is number "<< e<<endl;
                        }
                    }
    return 0;
}