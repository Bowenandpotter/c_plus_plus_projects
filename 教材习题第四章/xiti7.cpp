#include <iostream>
using namespace std;

int main(){
    int a,b,c;//c is anwser
    cin >> a >> b;
    int max = (a>b) ? a : b;
    int min = (a<b) ? a : b;
    c = max;
    while(c % min != 0){
        c = c + max;
    }
    cout << "anwser is " << c << endl; 
}