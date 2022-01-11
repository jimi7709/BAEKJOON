#include <iostream>
using namespace std;

int main(void) {

	int N, M;
	cin >> N >> M;

	if (N >= 3 && N <= 1000 && M >= 1 && M <= 1000) {
		if (M == 1 || M == 2) {
			cout << "NEWBIE!";
		}
		if (M <= N) {
			if ( M != 1 && M != 2) {//올드비는 1학년도 아니고 2학년도 아니므로.
				cout << "OLDBIE!";
			}
		}
		else {
			cout << "TLE!";
		}
	}
	return 0;
}