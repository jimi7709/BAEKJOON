#include <iostream>
//7�� 58�� ���� ǰ.
using namespace std;

int main(void) {

	int K, N, M;//����, ����, ���� ��
	int P;//�θ�Բ� ���� ��
	cin >> K >> N >> M;

	if (K >= 1 && N >= 1 && K <= 1000 && N <= 1000 && M >= 1 && M <= 100000) {
		P = K * N - M;
		if (P > 0) {
			cout << P;
			return 0;
		}
		else if (P <= 0) {
			cout << 0;
			return 0;
		}
	}


	return 0;
}