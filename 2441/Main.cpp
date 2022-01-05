#include <iostream>
using namespace std;
//배운 점
//예제출력 첫째줄 부터 생각없이 코딩하지 말고, 예제 출력의 모든 결과를 고려해보고
//코딩한다.
int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int k = N-i; k >= 1; k--) {
				cout << "*";
			}
			cout << '\n';
		}
	}


	return 0;
}

//int main() {
//	int input, i, j;
//	scanf("%d", &input);
//	for (i = 0; i < input; i++) {
//		for (j = 0; j < i; j++)
//			printf(" ");
//		for (j = 1; j <= (input - i); j++)
//			printf("*");
//		printf("\n");
//	}
//}