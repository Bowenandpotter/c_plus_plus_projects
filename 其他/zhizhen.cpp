#include <iostream>
using namespace std;

int main(){
    int a = 13;
    int * p;
    p = &a;
    cout << p << " " << &a << " " << &p << endl;
    return 0;
}