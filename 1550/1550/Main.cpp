#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int hex;
	int deci;

	scanf("%x", &hex); //16진수의 포맷은 %x이고 8진수의 포맷은 %o이다.
	deci = hex;
	printf("%d", deci);

	return 0;
}