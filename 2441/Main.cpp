#include <iostream>
using namespace std;
//��� ��
//������� ù°�� ���� �������� �ڵ����� ����, ���� ����� ��� ����� ����غ���
//�ڵ��Ѵ�.
int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int k = N-i; k >= 1; k--) {
				cout << "*";
			}
			cout << '\n';
		}
	}


	return 0;
}

//int main() {
//	int input, i, j;
//	scanf("%d", &input);
//	for (i = 0; i < input; i++) {
//		for (j = 0; j < i; j++)
//			printf(" ");
//		for (j = 1; j <= (input - i); j++)
//			printf("*");
//		printf("\n");
//	}
//}