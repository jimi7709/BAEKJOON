#include <iostream>
using namespace std;

//���� Ǫ�µ� �� 22�� 06�� �ɸ�.
int main(void) {

	int A[10000] = {};
	int N, X;
	cin >> N >> X;

	if (N >= 1 && X <= 10000 && N <= 10000 && X >= 1) {//�Է� �� ���� �����Ѵٸ�
		for (int i = 0; i < N; i++) {
			int temp;
			cin >> temp;
			A[i] = temp;
		}
		for (int i = 0; i < N; i++) {
			if (A[i] < X) {
				cout << A[i] << " ";
			}
		}



	}



	return 0;
}