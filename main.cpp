#include <iostream>
#include <ctime>

using namespace std;

int main() {
    //����һ�������
    srand((unsigned) time(0));
    int num = rand() % 100 + 1;
    int value = 0;
    //����һ�����ֲ´�С   ���� ��ʾ����  ��С ��ʾ��С  ���  ��ϲ
    while (true) {
        cin >> value;
        if (value > num) {
            cout << "�²����" << endl;
        } else if (value < num) {
            cout << "�²��С" << endl;
        } else {
            cout << "�¶���" << endl;
            break;
        }
    }
    return 0;
}