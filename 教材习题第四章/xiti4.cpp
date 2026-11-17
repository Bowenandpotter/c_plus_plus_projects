#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double fahrenheit , celsius;
    cin >> fahrenheit;
    celsius = (5.0/9) * (fahrenheit - 32);
    cout << setprecision(1) << celsius << endl;

}