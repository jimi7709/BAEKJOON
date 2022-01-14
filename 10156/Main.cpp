#include <iostream>
//7분 58초 만에 품.
using namespace std;

int main(void) {

	int K, N, M;//가격, 개수, 현재 돈
	int P;//부모님께 받을 돈
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