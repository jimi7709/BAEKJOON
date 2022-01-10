#include <iostream>


using namespace std;

int main(void) {
	int X;
	int res;
	cin >> X;
	if (X >= 1 && X <= 100) {
		res = X % 21;
		cout << res;
	}

	return 0;
}