
#include <iostream>
using namespace std;
int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 1; i < (N); i++) {//ó���� ���� �߰� ������ 
			for (int j = N - i; j >= 1; j--) {
				cout << " ";
			}
			for (int k = 1; k <= i; k++) {
				cout << "*";
			}
			cout << "\n";
		}

		for (int i = N; i >= 1; i--) {//�߰��� ���� ������
			for (int j = N - i; j >= 1; j--) {
				cout << " ";
			}
			for (int k = 1; k <= i; k++) {
				cout << "*";
			}
			cout << "\n";

		}
	}

	return 0;
}