#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
//char�� 100+1ũ�� �迭 1��
//�������� �������� �ʴ´�.
//�������� ������ �ʴ´�.

//���ѽð� 10��, 1�� �õ� ��ǰ.

//c�� c++ �� �� �ذ��� �� �ִ�.
// 1. C++�� string�� getline()�� ����.
// 2. C�� ����ǥ������ �̿��� Ǯ��.
//�ݺ����� ����Ǵ� ������ �����ϱ�? �������� �̿� ���õ� ����� �����Ƿ� �Ű�X.
//������ ���Ե� ���ڿ��� ����ϱ� ���� �ڵ带 ��� ¥�� �ұ�? ����ǥ���� ->3�г� ����.

//C++
//String Ŭ������ ���� ����.
//c-��Ʈ�������� �迭�� ũ�⿡ ���� ���ڿ��� ũ�Ⱑ ����������, string������ ���ڿ�
//ũ�⿡ ������ ����. �׷��� 
//getline()�� ���� ����.

//�� �Ǵ� ��� -> �� �ȵɱ�? -> �������� �����ϴ� ���ڿ��� ����� �� �ֱ� �����̴�.
//int main(void) {
//	char str[101];
//	while(1) {
//		cin.getline(str, 101, '\n');//��� �Է¹�����,�޴� ���� ũ��,���ڿ� �Է� �� ��������
//		cout << str<<'\n';
//	}
//	return 0;
//}

int main() {
	char s[101];
	while (scanf("%[^\n]\n", s) == 1) {
		printf("%s\n", s);
	}
	return 0;
}

//int main(void) {
//
//
//	string str;
//	while (true)
//	{
//		getline(cin, str);
//		if (str == "")
//			break;
//		cout << str << '\n';
//	}
//
//	return 0;
//}

//C

//int main(void) {
//	char s[101];
//	while (scanf("%[^\n]\n", s) == 1) {
//		printf("%s\n", s);
//	}
//	return 0;
//}

