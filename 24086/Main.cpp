#include <iostream>

using namespace std;

int main(void) {

	int A, B;
	cin >> A;
	cin >> B;
	if (B > A) {
		if (A >= 100 && B > A && B <= 200)
		{
			cout << B - A;
		}
	}
	return 0;

}