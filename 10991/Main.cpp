#include <iostream>
using namespace std;
//정답코드를 보아도 이해가 되지 않는다.


//오답코드

//int main(void) {
//
//	int N;
//	cin >> N;
//	if (N >= 1 && N <= 100) {
//
//		for (int i = 0; i < N; i++) {
//			for (int m = 0; m < i; m++) {
//					cout << " ";
//			}
//			for (int k = 0; k < i + 1; k++) {
//					cout << "*";
//			}
//			cout << "\n";
//		}
//
//	}
//
//
//	return 0;
//}

	//정답코드2
	int main(void) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {//n번 만큼 반복(총 n번개의 줄을 출력)
			for (int j = 0; j < n - 1 - i; j++)
				cout << " ";
			for (int j = 0; j < 2 * (i + 1) - 1; j++) {
				if (j % 2 == 0) 
					cout << "*";
				else 
					cout << " ";
			}
			cout << "\n";
		}
		return 0;
	}