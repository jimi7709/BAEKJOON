#include <iostream>

using namespace std;


int main(void) {

	int A, B, C;
	A = 300;
	B = 60;
	C = 10;
	int T;
	int opa = 0;
	int opb = 0;
	int opc = 0;
	int temp;
	cin >> T;
	temp = T;//맨 처음의 T초를 기억해서 T초가 0초일 경우 사용.

	if (T % 10 != 0) {//T초를 못 맞출 경우
		cout << -1;
		return 0;
	}
	if (T >= 1 && T <= 10000) {
		while (T != 0) {
			if ((T / A) >= 1) {
				opa++;
				T = T - A;
				if ((T / A) >= 1) {
					continue;
				}
			}
			else if ((T / B) >= 1) {
				opb++;
				T = T - B;
				if ((T / B) >= 1) {
					continue;
				}
			}
			else if ((T / C) >= 1) {
				opc++;
				T = T - C;
				if ((T / C) >= 1) {
					continue;
				}
			}
		}
	}
	if (temp == 0 && opa == 0 && opb == 0 && opc == 0) {//T초가 0초일 경우
		cout << 0;
	}
	else if (temp != 0 && (opa != 0 || opb != 0 || opc != 0)) {//버튼 출력.
		cout << opa << " " << opb << " " << opc<<'\n';
	}

	return 0;
}