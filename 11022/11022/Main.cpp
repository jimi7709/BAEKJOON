#include <iostream>

//�׽�Ʈ ���� ���� T
//�� ���� A,B
//"Case #x: A + B = C"


using namespace std;

int main(void) {

	int A, B, T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		std::cin >> A>> B;

		cout << "Case #" << i+1 << ": " << A << " + "<< B << " " << "= " << A + B<<'\n';

	}


	return 0;
}