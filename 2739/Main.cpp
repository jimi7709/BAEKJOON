#include <iostream>
using namespace std;
int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 9) {
		for (int i = 1; i <= 9; i++) {
			cout << N << " * " << i << " = " << N * i<<'\n';
		}
	}
	return 0;
}