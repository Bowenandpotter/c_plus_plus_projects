// #include<iostream>
// using namespace std;

// int main(){
//     char s[]="987654321";
//     char *p=&s[8];
//     do{
//         cout<<*p<<' '<<p<<' ';
//         p--;
//     }while(p>=s);
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    char s[] = "987654321";

    for (char *p = &s[8]; ; p--) {
        cout << *p << ' '
             << static_cast<void*>(p) << ' ';

        if (p == s) break;
    }

    return 0;
}