#include <iostream>
using namespace std;

int main(){
    bool bool_a , bool_b , bool_c , bool_d;
    char thisman = 'A';
    for(int k = 0 ; k < 4 ; k ++){
        bool_a = (thisman != 'A');
        bool_b = (thisman == 'C');
        bool_c = (thisman == 'D');
        bool_d = (!bool_c);
        if (bool_a + bool_b + bool_c + bool_d == 3){
            cout << "this man is" << thisman << endl;
        }
        thisman ++;
    }
}