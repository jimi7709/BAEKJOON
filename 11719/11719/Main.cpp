#include <iostream>
#include <string>
using namespace std;
//������ �տ��� �ڿ��� �����ϸ�, cin.getline() �� �̿�����.
//�׷��� std����ؾ���.
//���� ���� ����(���� ���� �����Ƿ�)


//cin.getline() �Լ��� ����� ��� "��� �ʰ�" �߻�.
//string ���� �޾Ƽ� getline()����ؼ� "��� �ʰ�" �߻�.
//-> ���� ������ ����� ���� �ʾƼ� "��� �ʰ�"�� �߻��Ͽ���.(100�� ���� ��� �� ����.)

//�迭�� cin.getline()�� �̿��� ���

int main(void) {
	char stra[101];
	for (int i = 0; i < 100; i++) {
		cin.getline(stra, 101);
		cout << stra << '\n';
	}
	return 0;
}

//string Ŭ������ �̿��� ���.

//int main(void) {
//		string str;
//	for (int i = 0; i < 100; i++) {
//		getline(cin,str,'\n');
//		cout << str << '\n';
//	}
//	return 0;
//}
