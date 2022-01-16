#include <iostream>
//18분 58초 만에 품.
using namespace std;

int main(void) {
	int A, B, C;
	cin >> A >> B >> C;;
	int max, min,middle;
	if (A >= 1 && B >= 1 && C >= 1 && A <= 1000000 && B <= 1000000 && C <= 1000000) {
		if (A > B) {
			if (A > C) {
				max = A;
				if (B > C) {
					middle = B;
					min = C;
				}
				else {
					middle = C;
					min = B;
				}
			}
			else {
				max = C;
				min = B;
				middle = A;
			}
		}
		else {
			if (B > C) {
				max = B;
				if (C > A) {
					min = A;
					middle = C;
				}
				else {
					min = C;
					min = A;
				}
			}
			else {
				max = C;
				min = A;
				middle = B;
			}
		}
		if (B > C) {
			if (B > A) {
				max = B;
				if (A > C) {
					middle = A;
					min = C;
				}
				else {
					middle = C;
					min = A;
				}
			}
			else {
				max = A;
				middle = B;
				min = C;
			}
		}
		if (A > C) {
			if (A > B) {
				max = A;
				if (B > C) {
					middle = B;
					min = C;
				}
				else {
					middle = C;
					min = B;
				}
			}
			else {
				max = B;
				middle = A;
				min = C;
			}
		}
	}
	cout << min << " " << middle << " " << max;

	return 0;
}