#include <iostream>
using namespace std;


int main(void) {
	
	int A, B, C, D, P;
	int output=0;//1�� ���� ���
	int tempx=0, tempy=0;//x��� y�� ������� ��� ���.
	cin >> A;//x���� ���� ���.
	cin >> B;//y���� ���� ���.
	cin >> C;//y���� �߰� ������� ���� ��뷮
	cin >> D;//y���� �߰� ���� ���.
	cin >> P;//JOI���� �� �ް� ������ �� 
	if (A >= 1 && A <= 10000 && B >= 1 && B <= 10000 && C >= 1 && C <= 10000 && D >= 1 && D <= 10000 && P >= 1 && P <= 10000) {
		tempx =  P*(1 * A);
		if (P <= C) {
			tempy = B;
		}
		else if (P > C) {
			tempy = B + (P-C)*(1*D);
		}
	}
	if (tempx < tempy) {
		output = tempx;
	}
	else if (tempx > tempy) {
		output = tempy;
	}
	else if (tempx == tempy) {
		output = tempx;
	}
	cout << output;
	return 0;
}