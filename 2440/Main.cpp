
#include <iostream>
using namespace std;

int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 0; i < N; i++) {
			for (int k = N - i; k >= 1; k--) {
				cout << "*";
			}
			cout << "\n";
		}

	}



	return 0;
}