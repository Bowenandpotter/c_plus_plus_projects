#include <iostream>  // cin, cout
#include <iomanip>   // setw – 设置显示宽度
using namespace std;

//（此处代码见下一页）
int BinarySearch(int AA[], int Key, int low, int high) ;

int main() {
    const int NUM = 100; // NUM是整型常量
    int a[NUM]; // 数组大小可以使用整型常量
    for (int i=0; i<NUM; i++) {
        a[i] = i*i+1;
        cout << setw(4) << a[i] << ((i+1) % 10 == 0 ? '\n' : ' ');
    }
    
    int searchKey;
    cout << "请输入一个待查正整数: ";
    cin >> searchKey;
    
    int b = 0;
    b = BinarySearch(a, searchKey, 0, NUM-1);
    
    if (b != -1)
        cout << "查到该数在数组中为: a[" << b << "]\n";
    else
        cout << "数组中无此数!\n";
    
    return 0;
}
int BinarySearch(int AA[], int Key, 
                 int low, int high) {
    int middle = 0;
    while (low <= high) {
        middle = (low + high) / 2;
        if (Key == AA[middle])
            return middle;
        else if (Key < AA[middle])
            high = middle - 1;
        else
            low = middle + 1;
    }
    return -1; // 数组中没有Key
}

