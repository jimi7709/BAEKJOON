#define _CRT_SECURE_NO_WARNINGS
//#define MAX 10001
#include <stdio.h>

int arr[120];
int main(void) {
	int N;
	int arra[28] = { 0, };//색인이 0->2,24->97, 25->101,25->103 26->107 ,27->109
	int a = 1;
	int cnt = 0;
	scanf("%d", &N);
	if (N == 1)
	{
		printf("%d", 6);
		return 0;
	}
	for (int i = 2; i <= 120; i++) {
		if (!arr[i])
		{
			for (int j = i + i; j <= 120; j += i) {
				arr[j] = 1;
			}
		}
		//잘못짠 코드
		//if (i >= a && arr[i] == 0 && i * (i + 1) < N) {
		//	one = i;
		//}
		//if (i >= a && arr[i] == 0 && i * (i + 1) > N) {
		//	arra[0] = i;
		//	//			printf("one: %d\n", one);
		//	continue;
		//}

		if (i >= a && arr[i] == 0)
		{
			arra[cnt] = i;
			//디버깅용 코드
//			printf("%d\n", i);
			if (arra[27] != 0) {
				break;
			}
			cnt++;
			//디버깅용 코드
			//if ((arra[cnt] * arra[cnt + 1]) > N) {
			//	printf("%d\n", arra[cnt]*arra[cnt+1]);
			//	break;
			//}
		}
	}
	for (int i = 0; i <= 26; i++) {
		if (arra[i] * arra[i + 1] < N)
		{
			//디버깅용 코드
//			printf("arra[%d]: %d , arra[i]*arra[i+1]:%d\n",i, arra[i],arra[i]*arra[i+1]);
		}
		if (arra[i] * arra[i + 1] > N)
		{
			printf("%d\n", arra[i] * arra[i + 1]);
			break;
		}
	}

	return 0;
}