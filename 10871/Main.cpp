#include <iostream>
using namespace std;

//문제 푸는데 약 22분 06초 걸림.
int main(void) {

	int A[10000] = {};
	int N, X;
	cin >> N >> X;

	if (N >= 1 && X <= 10000 && N <= 10000 && X >= 1) {//입력 값 범위 만족한다면
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