
#include <iostream>
using namespace std;


int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int j = 1; j <= N; j++) {
			for (int i = 1; i<= j; i++) {
				cout << "*";
			}
			cout << '\n';
		}
	}
	return 0;
}