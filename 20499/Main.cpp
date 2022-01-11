#include <iostream>

using namespace std;

int main(void) {

	int K, D, A;
	cin >> K >> D >> A;
	if (K >= 0 && D >= 0 && A >= 0 && K <= 20 && D <= 20 && A <= 20) {
		if (K + A < D) {
			cout << "hasu";
		}
		else {
			cout << "gosu";
		}
	}



	return 0;
}