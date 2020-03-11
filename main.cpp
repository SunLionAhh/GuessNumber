#include <iostream>
#include <ctime>

using namespace std;

int main() {
    //生成一个随机数
    srand((unsigned) time(0));
    int num = rand() % 100 + 1;
    int value = 0;
    //输入一个数字猜大小   过大 提示过大  过小 提示过小  相等  恭喜
    while (true) {
        cin >> value;
        if (value > num) {
            cout << "猜测过大" << endl;
        } else if (value < num) {
            cout << "猜测过小" << endl;
        } else {
            cout << "猜对了" << endl;
            break;
        }
    }
    return 0;
}