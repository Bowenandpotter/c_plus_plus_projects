#include <iostream>
using namespace std;

int main(){
    double e = 1.0;
    int k = 1;
    double c;
    do{
        c = 1.0;
        for(int i = 1 ; i <= k ; i ++){
            c = c / i;
        }
        e = e + c;
        k ++;
    }while (c > 1e-10);
    cout << e << endl;
    return 0;
}