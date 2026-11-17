#include <iostream>
using namespace std;
 
/// 实现函数map
 
int square(int x) {
    return x * x;
}
 
int div2(int x) {
    return x / 2;
}
 
int poly2(int x) {
    return 3 * x + 2 * x + 1;
}

typedef int(*func)(int);
int* map(func p,int arr[],int size)
{
    int *result=new int[size];
    for(int i=0;i<size;i++)
    {
        result[i]=p(arr[i]);
    }
    return result;
}
 
int main() {
    int size;
    cin >> size;
    int arr[1000];
    for(int i = 0; i < size; i ++) cin >> arr[i];
     
    /// 定义数组op，包含三个函数：square、div2和poly2；
    typedef int(*func)(int);
    func op[]={square,div2,poly2};
    cout << "0: square; 1: div2; 2: poly2" << endl;
    for (int i = 0; i < 3; ++i) {
        /// map函数运用数组元素op[i]对数组arr中的每个元素进行操作
        int* result = map(op[i], arr, size); 
        for (int j = 0; j < size; ++j) {
            cout << result[j] << " ";
        }
        cout << endl;
        delete[] result;
    }
    return 0;
}