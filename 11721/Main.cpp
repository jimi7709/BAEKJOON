#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//배운 점.

//문제를 읽고 입력 값과 출력 값까지 이해를 하고 나서 코딩을
//해야 잘못 이해하지 않고 좀 더 빨리 코딩할 수 있다.
//char 배열로 101 크기 이용
//문자 10개씩 끊어서 출력한다.

//int main(void) {
//	char ary[101] = { 0, };
//
//	while (scanf("%10s", ary) == 1) {
//		printf("%s\n", ary);
//	}
//
//	return 0;
//}

int main(void) {
	char s[101] = { 0, };
	scanf("%s", s);
	
	for (int i = 0; i < 100; i++) {
		if ((i  ) % 10 == 0) {
			printf("\n");
		}
		printf("%c", s[i]);
	}

	return 0;
}