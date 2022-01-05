
#include <iostream>
using namespace std;
int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 1; i <= N; i++) {
			for (int k = N - i; k >= 1; k--) {
				cout << " ";
			}
			for (int j = 1; j <=i; j++) {
				printf("*");
			}
			cout << '\n';
		}
	}

	return 0;
}