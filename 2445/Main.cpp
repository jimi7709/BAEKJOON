#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//정답 코드

int main() {
	int N, i, j;
	scanf("%d", &N);

	for (i = 1; i < N; i++) {//첫줄 부터. N번 째(중간) 전 줄까지만 반복.
		for (j = 0; j < i; j++) {//별 출력하고
			printf("*");
		}
		
		for (j = 0; j < 2 * (N - i); j++) {//별을 출력한 만큼 빼준다.
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = N; i > 0; i--) {//중간줄 부터 마지막줄 까지
	for (j = 0; j < i; j++) {
		printf("*");
	}
	for (j = 0; j < 2 * (N - i); j++) {//별을 출력한 만큼 빼준다.
		printf(" ");
	}
	for (j = 0; j < i; j++) {
		printf("*");
	}
	printf("\n");
	}

	return 0;
}

//오답 코드
//int main(void) {
//
//
//	int N;
//	cin >>N;
//	if (N >= 1 && N <= 100) {
//		for (int i = 1; i <= (2 * N - 1); i++) {
//			int k, j, x, y;
//			for (k = 1; k <= i; k++) {
//				cout << "*";
//			}
//			for (j = N - k; j >= 1; j--) {
//				cout << " ";
//			}
//			for (x = N - i; x >= 1; j--) {
//				cout << " ";
//			}
//			for (y = 1; y <= i; y++) {
//				cout << "*";
//			}
//		}
//	}
//	return 0;
//}