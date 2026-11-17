#include <iostream>
using namespace std;

int main(){
    for(int a=0;a<3;a++){
        for(int b = 0; b<3;b++){
            for(int c=0;c<3;c++){
                if((a==b)||(a==c)||(b==c))continue;
                int right_a = (b>a) +(a==c);
                int right_b = (a>b) +(a>c);
                int right_c = (c>b) +(b>a);
                if(a<b && right_a < right_b)continue;
                if(b<a && right_b < right_a)continue;
                if(c<b && right_c < right_b)continue;
                if(b<c && right_b < right_c)continue;
                if(a<c && right_a < right_c)continue;
                if(c<a && right_c < right_a)continue;
                for(int score = 0 ; score < 3 ; score++){
                    if(a==score){
                        cout << "A";
                    }
                    if(b==score){
                        cout << "B";
                    }
                    if(c==score){
                        cout << "C";
                    }
                }
            }
        }
    }
    return 0;
}