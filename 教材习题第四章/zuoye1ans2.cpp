#include <iostream>
using namespace std;

int main() {
    // a, b, c 代表饭量数值：0最小，1居中，2最大
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            for (int c = 0; c < 3; c++) {
                if (a == b || a == c || b == c) continue;

                // 统计各自说对的题数
                int right_a = (b > a) + (a == c);
                int right_b = (a > b) + (a > c);
                int right_c = (c > b) + (b > a);

                // 严格约束：饭量越小，正确数越多
                // 即：(a - b) 的符号必须和 (right_a - right_b) 的符号相反
                bool valid_ab = (a > b && right_a < right_b) || (a < b && right_a > right_b);
                bool valid_ac = (a > c && right_a < right_c) || (a < c && right_a > right_c);
                bool valid_bc = (b > c && right_b < right_c) || (b < c && right_b > right_c);

                if (valid_ab && valid_ac && valid_bc) {
                    cout << "饭量从小到大顺序为: ";
                    // 找出 0(最小)、1(居中)、2(最大) 分别是谁
                    for (int score = 0; score < 3; score++) {
                        if (a == score) cout << "A ";
                        if (b == score) cout << "B ";
                        if (c == score) cout << "C ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
