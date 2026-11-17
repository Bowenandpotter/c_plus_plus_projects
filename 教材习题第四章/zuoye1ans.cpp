#include <iostream>
using namespace std;

int main() {
    // 假设饭量数值为 0, 1, 2（数值越大饭量越大）
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            for (int c = 0; c < 3; c++) {
                // 假设三个人饭量互不相同（如果允许相同可去掉这行）
                if (a == b || a == c || b == c) continue;

                // 统计各自说对的话数
                int right_a = (b > a) + (a == c);
                int right_b = (a > b) + (a > c);
                int right_c = (c > b) + (b > a);

                // 校验规则：饭量越小，讲对的话越多（即：饭量大的人，说对的话不会多于饭量小的人）
                if (a > b && right_a > right_b) continue;
                if (a < b && right_a < right_b) continue;

                if (a > c && right_a > right_c) continue;
                if (a < c && right_a < right_c) continue;

                if (b > c && right_b > right_c) continue;
                if (b < c && right_b < right_c) continue;

                // 输出结果：按饭量从小到大输出
                cout << "饭量从小到大顺序为: ";
                for (int score = 0; score < 3; score++) {
                    if (a == score) cout << "A ";
                    if (b == score) cout << "B ";
                    if (c == score) cout << "C ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
