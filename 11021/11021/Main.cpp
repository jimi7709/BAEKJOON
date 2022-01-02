#include <iostream>

using namespace std;

int main(void) {

	int T;//케이스 개수
	int A, B;// 두 정수 

	cin >> T;
	for (int i = 0; i < T; i++) {//케이스 개수 만큼 반복

		cin >> A >> B;
		if (A > 0 && B > 0 && A < 10 && B < 10) {// 두 정수의 입력 조건
			cout << "Case #" << i+1 << ": " << A + B<<'\n';
		}

	}


	return 0;
}