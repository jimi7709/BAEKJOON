#include <iostream>

using namespace std;

int main(void) {

	int N;

	cin >> N;

	if (N >= 1 && N <= 100) {
		for (int i = 0; i <N; i++) {
			for (int k = 0; k < 1; k++) {
				cout << " ";
			}
			for (int j = 1+2*(N-1); j >= 1; j--) {
				cout << "*";
			}
			cout << "\n";
		}
	}

	//�����ڵ�
	//���� �ٱ��� for���� �ʱ�İ� ���ǽ� ������ ���� �߿��ϴ�.
	for (int i = N; i >= 1; i--) {//1���� ���� �߰��ٱ���
		for (int j = 0; j < N - i; j++) {//���� �ٷ� �̵��� ������ -i 
			cout << " "; 
		} 
		for (int j = 0; j < 2 * i - 1; j++) {//���� 2*i�� �� �ڿ� -1�� ����
			cout << "*"; 
		} 
		cout << "\n";
	}
	for (int i = 2; i <= N; i++) {//N-1�� ��ŭ �ݺ�
		for (int j = 0; j < N - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}




	return 0;
}