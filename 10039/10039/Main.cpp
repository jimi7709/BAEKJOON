#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int num1, num2, num3, num4, num5;
	int sum=0;
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	if (num1 % 5 == 0 && num1 <= 100 && num2 % 5 == 0 && num2 <= 100 && num3 % 5 == 0 && num3 <= 100 && num4 % 5 == 0 && num4 <= 100 && num5 % 5 == 0 && num5 <= 100 ) {

		if (num1 < 40)
			num1 = 40;
		 if (num2 < 40)
			num2 = 40;
		 if (num3 < 40)
			num3 = 40;
		 if (num4 < 40)
			num4 = 40;
		 if(num5 < 40)
			num5 = 40;

		 sum = sum + (num1 + num2 + num3 + num4 + num5) / 5;
	}
	printf("%d", sum);
	return 0;
}