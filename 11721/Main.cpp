#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//��� ��.

//������ �а� �Է� ���� ��� ������ ���ظ� �ϰ� ���� �ڵ���
//�ؾ� �߸� �������� �ʰ� �� �� ���� �ڵ��� �� �ִ�.
//char �迭�� 101 ũ�� �̿�
//���� 10���� ��� ����Ѵ�.

//int main(void) {
//	char ary[101] = { 0, };
//
//	while (scanf("%10s", ary) == 1) {
//		printf("%s\n", ary);
//	}
//
//	return 0;
//}

int main(void) {
	char s[101] = { 0, };
	scanf("%s", s);
	
	for (int i = 0; i < 100; i++) {
		if ((i  ) % 10 == 0) {
			printf("\n");
		}
		printf("%c", s[i]);
	}

	return 0;
}