#include <iostream>
//22�� 2�� ���� ǰ.
using namespace std;

int main(void) {

	int one, two, three;
	int output =0 ;

	cin >> one >> two >> three;

	if (one == two&&one == three&&two == three) {// ���� ���� 3���� ������ ���
		output = 10000 + one * 1000;
		cout << output;

		return 0;
	}
	if (one == two) {// ���� ���� 2���� ������ ���
		output = 1000 + one * 100;
		cout << output;
	}
	else if (two == three) {
		output = 1000 + two * 100;
		cout << output;

	}
	else if (three == one) {
		output = 1000 + three * 100;
		cout << output;

	}
	if (one != two &&one!= three&&two !=three) {// ��� �ٸ� ���� ������ ���

		if (one > two) {

			if (one > three) {
				output = one * 100;
			}
			else {
				output = three * 100;
			}
		}
		if (two > three) {
			if (two > one) {
				output = two * 100;
			}
			else {
				output = one * 100;
			}
		}
		if (three > one) {
			if (three > two) {
				output = three * 100;
			}
			else {
				output = two * 100;
			}
		}
			cout << output;
	}


	return 0;
}