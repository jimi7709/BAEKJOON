#include <iostream>
using namespace std;
//�����ڵ带 ���Ƶ� ���ذ� ���� �ʴ´�.


//�����ڵ�

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

	//�����ڵ�2
	int main(void) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {//n�� ��ŭ �ݺ�(�� n������ ���� ���)
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