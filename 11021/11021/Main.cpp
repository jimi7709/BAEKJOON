#include <iostream>

using namespace std;

int main(void) {

	int T;//���̽� ����
	int A, B;// �� ���� 

	cin >> T;
	for (int i = 0; i < T; i++) {//���̽� ���� ��ŭ �ݺ�

		cin >> A >> B;
		if (A > 0 && B > 0 && A < 10 && B < 10) {// �� ������ �Է� ����
			cout << "Case #" << i+1 << ": " << A + B<<'\n';
		}

	}


	return 0;
}