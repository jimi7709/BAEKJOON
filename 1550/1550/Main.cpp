#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int hex;
	int deci;

	scanf("%x", &hex); //16������ ������ %x�̰� 8������ ������ %o�̴�.
	deci = hex;
	printf("%d", deci);

	return 0;
}