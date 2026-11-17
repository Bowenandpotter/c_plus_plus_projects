#include <iostream>
#include<cmath>
using namespace std;

int findmax(int);

int main(){
    int x;
    cin >> x;
    cout << findmax(x);
    return 0;
}

int findmax(int y)
{
    for(int i=0;i<30;i++)
    {
        if(pow(2,i)>=y)
        {
            return i;
        }
    }
    return 0;
}