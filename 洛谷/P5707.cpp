#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int s , v , current_time , time , hour, minute;
    cin >> s >> v;
    if (s % v == 0){
        time = s/v + 10;
    }
    else{
        time = s/v + 1 + 10;
    }
    if(time > 480){
        current_time = 24*60 -(time - 480);
    }
    else{
        current_time = 480 - time;
    }
    hour = current_time / 60;
    minute = current_time % 60;
    cout << setfill('0') << setw(2) << hour << ":"
    << setw(2) << minute << endl;
}