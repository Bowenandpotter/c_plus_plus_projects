#include <iostream>
using namespace std;

int main(){
    bool bool_1, bool_2, bool_3, bool_4, bool_5, bool_6;
    bool suspects[6];
    int has_criminal = 0;
    for(int i = 0 ; i < 64 ; i ++)
    {
        int trial = i;
        for (int j = 0 ; j < 6 ; j ++)
        {
            suspects[j] = trial % 2;
            trial = trial / 2;
        }
        bool_1 = (suspects[0] || suspects[1]);
        bool_2 = (!suspects[0] || !suspects[3]);
        bool_3 = (suspects[0] && suspects[4]) || (suspects[0] && suspects[5]) ||(suspects[4] && suspects[5]);
        bool_4 = (suspects[1] && suspects[2]) || (!suspects[1] && !suspects[2]);
        bool_5 = (!suspects[2] && suspects[3]) || (suspects[2] && !suspects[3]);
        bool_6 = (suspects[3] || !suspects[4]);
        if(bool_1 + bool_2 + bool_3 + bool_4 + bool_5 + bool_6 == 6)
        {
            for(int m = 0 ; m < 6 ; m ++)
            {
                if(suspects[m])
                {
                    cout << char(int('A')+m) << " is the criminal" << endl;
                }
                else{
                    cout << char(int('A')+m) << " is not the criminal" << endl;
                }
            }
            has_criminal = 1;
            break;
        }
    } 
    if(has_criminal != 1)
    {
        cout << "no criminal is found" << endl;
    }
    return 0;
}