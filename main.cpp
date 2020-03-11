#include <iostream>
#include <ctime>

using namespace std;
void guess(int num){
    int value = 0;
    //输入一个数字猜大小   过大 提示过大  过小 提示过小  相等  恭喜
    while (true) {
        cout<<"请输入你猜测的数字： ^_^"<<endl;
        cin >> value;
        if (value > num) {
            cout << "猜测过大=_=" << endl;
        } else if (value < num) {
            cout << "猜测过小=_=" << endl;
        } else {
            cout << "恭喜你，猜对了^_^" << endl;
            break;
        }
    }
}
int main() {
    //生成一个随机数
    srand((unsigned) time(0));
    int num = rand() % 100 + 1;
    guess(num);
    return 0;
}