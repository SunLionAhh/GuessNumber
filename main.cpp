#include <iostream>
#include <ctime>

using namespace std;
void guess(int num){
    int value = 0;
    //����һ�����ֲ´�С   ���� ��ʾ����  ��С ��ʾ��С  ���  ��ϲ
    while (true) {
        cout<<"��������²�����֣� ^_^"<<endl;
        cin >> value;
        if (value > num) {
            cout << "�²����=_=" << endl;
        } else if (value < num) {
            cout << "�²��С=_=" << endl;
        } else {
            cout << "��ϲ�㣬�¶���^_^" << endl;
            break;
        }
    }
}
int main() {
    //����һ�������
    srand((unsigned) time(0));
    int num = rand() % 100 + 1;
    guess(num);
    return 0;
}