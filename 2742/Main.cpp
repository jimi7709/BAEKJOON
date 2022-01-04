#include <iostream>
using namespace std;
int main(void) {

	int N;
	cin >> N;
	if (N <= 100000) {
		for (int i = N; i >= 1; i--) {
			cout <<i<<'\n';
		}
	}

	return 0;
}