#include <iostream>
using namespace std;


int main(void) {
	
	int A, B, C, D, P;
	int output=0;//1달 수도 요금
	int tempx=0, tempy=0;//x사와 y사 수도요금 계산 결과.
	cin >> A;//x사의 수도 요금.
	cin >> B;//y사의 수도 요금.
	cin >> C;//y사의 추가 수도요금 제한 사용량
	cin >> D;//y사의 추가 수도 요금.
	cin >> P;//JOI군의 한 달간 수도의 양 
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