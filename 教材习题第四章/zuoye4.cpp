#include <iostream>
using namespace std;

int main()
{//1 is A, 2 is B , 3 is C
    for (int a1 = 1; a1 <= 3; a1++)                     // yuwen
        for (int a2 = 1; a2 <= 3; a2++)                 // suanshu
            for (int b1 = 1; b1 <= 3; b1++)             // zhengzhi
                for (int b2 = 1; b2 <= 3; b2++)         // dili
                    for (int c1 = 1; c1 <= 3; c1++)     // yinyue
                        for (int c2 = 1; c2 <= 3; c2++) // meishu
                        {
                            int a[6] = {a1, a2, b1, b2, c1, c2};
                            int count1 = 0;
                            int count2 = 0;
                            int count3 = 0;

                            for (int i = 0; i < 6; i++)
                            {
                                if (a[i] == 1)
                                    count1++;
                                if (a[i] == 2)
                                    count2++;
                                if (a[i] == 3)
                                    count3++;
                            }

                            if (count1 != 2 || count2 != 2 || count3 != 2)
                            {
                                continue;
                            }

                            if((b1 != a2)&&(b2!=a1)&&(b2!=2)&&(b2!=1)&&(a2!=1)&&(c1!=2)&&(a1!=2))
                            {
                                cout<<"yuwen:"<<char('A'-1+a1)<<" suanshu:"<<char('A'-1+a2)<< " zhengzhi:"<< char('A'-1+b1)<<" dili:"<< char('A'-1+b2)<<" yinyue:"<< char('A'-1+c1)<<" meishu:"<< char('A'-1+c2)<<endl;
                            }
                        }
    return 0;
}