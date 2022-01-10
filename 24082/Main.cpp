#include <iostream>


using namespace std;

int main(void) {
	long long int X;

	long long int res;
	cin >> X;

	if (X >= 1 && X <= 1000) {
		res = X * X * X;
		cout << res;
	}


	return 0;
}