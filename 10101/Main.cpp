#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;
	int output;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > 0 && b > 0 && c > 0 && a < 180 && b < 180 && c < 180) {
		output = a + b + c;

		if (a == 60 && b == 60 && c == 60) {
			cout << "Equilateral" << '\n';
			return 0;

		}
		if (output == 180 ) {//�Ʒ� 3���� if���� �� ���ǹ��� ���Ƽ� ����, a,b,c�� ��� 60�� �� �ݷʰ� �����.
			if (a == b) {
				if (a != c && b != c) {
					cout << "Isosceles" << '\n';
					return 0;

				}
			}
			if (b == c) {
				if (a != b && c != a) {
					cout << "Isosceles" << '\n';
					return 0;

				}
			}
			if (a == c) {
				if (a != b && c != b) {
					cout << "Isosceles" << '\n';
					return 0;

				}
			}
			if (a != b && a != c && b != c) {
				cout << "Scalene" << '\n';
				return 0;
			}
		}
		else if (output != 180) {
			cout << "Error" << '\n';
			return 0;

		}
	 }



	return 0;
}