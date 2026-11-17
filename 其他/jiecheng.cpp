#include <iostream>
using namespace std;

int main(){
    int c;
    cin >> c;
    long s = 1;
    for(int i = c ; i > 0 ; i --){
        s = s * i;
        cout << "i=" << i << ", s=" << s << endl;
    }
}