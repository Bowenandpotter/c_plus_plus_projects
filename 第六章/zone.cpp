#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int zone[101]={1};
    for(int i=0;i<100;i++)
    {
        zone[i+1]=zone[i]+i+1;
    }
    cout<<zone[100]<<endl;
    return 0;
}