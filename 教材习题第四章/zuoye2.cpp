#include<iostream>
using namespace std;
int main(){
    int best = 1;
    for(int i = 0 ; i < 4; i++)
    {
        if((best == 2)+(best == 4)+(best != 3)+(best != 4) == 1)
        {
            break;
        }
        best ++;
    }
    cout << "the best is number " << best << endl;
    if(best ==2)
    {
        cout << "A is right"<<endl;
    }
    if(best == 4)
    {
        cout << "B is right"<<endl;
    }
    if(best != 3)
    {
        cout << "C is right"<<endl;
    }
    if(best != 4)
    {
        cout << "D is right"<<endl;
    } 
    return 0;
}