#include <iostream>

using namespace std;

int main(void) {
	int A, B, C, D, L;
	int tmath;
	int tkor;
	int output;
	cin >> L;//����
	cin >> A;//����
	cin >> B;//����
	cin >> C;//�Ϸ� ���
	cin >> D;//�Ϸ� ���з�
	if (L >= 2 && L <= 40 && A >= 1 && A <= 1000 && B >= 1 && B <= 1000 && C >= 1 && C <= 100 && D >= 1 && D <= 100) {
		tmath = B / D;
		tkor = A / C;
		if (B % D != 0) {//���� ������������ �ִٸ�
			tmath += 1;
		}
		if (A % C != 0) {//���� ������������ �ִٸ�
			tkor += 1;
		}
		if (tmath > tkor) {//����� ���� �� �� ���� �ɸ��� ���� ����
			output = tmath;
		}
		else if (tmath <= tkor) {
			output = tkor;
		}
		output = L - output;//���� ���� ���
		cout << output;

		return 0;
	}

	return 0;
}