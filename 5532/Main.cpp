#include <iostream>

using namespace std;

int main(void) {
	int A, B, C, D, L;
	int tmath;
	int tkor;
	int output;
	cin >> L;//방학
	cin >> A;//국어
	cin >> B;//수학
	cin >> C;//하루 국어량
	cin >> D;//하루 수학량
	if (L >= 2 && L <= 40 && A >= 1 && A <= 1000 && B >= 1 && B <= 1000 && C >= 1 && C <= 100 && D >= 1 && D <= 100) {
		tmath = B / D;
		tkor = A / C;
		if (B % D != 0) {//남은 수학페이지가 있다면
			tmath += 1;
		}
		if (A % C != 0) {//남은 국어페이지가 있다면
			tkor += 1;
		}
		if (tmath > tkor) {//국어와 수학 중 더 오래 걸리는 것을 선택
			output = tmath;
		}
		else if (tmath <= tkor) {
			output = tkor;
		}
		output = L - output;//남은 방학 계산
		cout << output;

		return 0;
	}

	return 0;
}