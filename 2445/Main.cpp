#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//���� �ڵ�

int main() {
	int N, i, j;
	scanf("%d", &N);

	for (i = 1; i < N; i++) {//ù�� ����. N�� °(�߰�) �� �ٱ����� �ݺ�.
		for (j = 0; j < i; j++) {//�� ����ϰ�
			printf("*");
		}
		
		for (j = 0; j < 2 * (N - i); j++) {//���� ����� ��ŭ ���ش�.
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = N; i > 0; i--) {//�߰��� ���� �������� ����
	for (j = 0; j < i; j++) {
		printf("*");
	}
	for (j = 0; j < 2 * (N - i); j++) {//���� ����� ��ŭ ���ش�.
		printf(" ");
	}
	for (j = 0; j < i; j++) {
		printf("*");
	}
	printf("\n");
	}

	return 0;
}

//���� �ڵ�
//int main(void) {
//
//
//	int N;
//	cin >>N;
//	if (N >= 1 && N <= 100) {
//		for (int i = 1; i <= (2 * N - 1); i++) {
//			int k, j, x, y;
//			for (k = 1; k <= i; k++) {
//				cout << "*";
//			}
//			for (j = N - k; j >= 1; j--) {
//				cout << " ";
//			}
//			for (x = N - i; x >= 1; j--) {
//				cout << " ";
//			}
//			for (y = 1; y <= i; y++) {
//				cout << "*";
//			}
//		}
//	}
//	return 0;
//}