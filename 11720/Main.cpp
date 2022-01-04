#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
//정답 코드

//배운 점.
//리눅스의 GCC나 C99부터 가변길이 배열을 지원한다.
//가변길이 배열이란 컴파일 말고 실행시간 때 배열의 길이를 할당하는 배열이다.
//비쥬얼 스튜디오에서는 C99를 지원하지 않기 때문에 배열의 크기를 선언할 때, 변수를 사용할 수 없다.
//char형 배열을 숫자처럼 계산할 때는 실질적으로 컴퓨터 안에서, char형 값에 해당하는 아스키 코드 값을 서로 연산하기 때문에 ** 값 - '0'을 해줘야 한다.
//char형 배열의 경우 맨 마지막에 '\0'가 들어가기에 최소 101 크기가 필요하다.
//인춧의 총 자릿수가 100이 넘을 수 있기 대문에 최소 101이 되어야 한다.

int main(void) {
    int N;//숫자의 개수
    int sum = 0;//총 합.
    char ary[101] = { 0, };
    cin >> N;
    cin >> ary;
    for (int i = 0; i < N; i++) {//N의 개수 만큼 반복.
        sum += (ary[i] - '0');
    }

    cout << sum << '\n';
    return 0;
}

/*
오답 코드를 푸는 생각
숫자를 입력 받으면 그것을 문자 배열에 저장 -> 인덱스 0부터 더한다.
*/
//오답 코드
//int main(void) {
//
//	int  N;
//	int ary[100] = { 0, };
//	int total=0;
//	int i=0;
//	std:: cin >> N;//숫자의 개수 입력 받기
//	while (N--) {//숫자의 개수 만큼 반복
//		scanf("%d", &ary);//공백 없이 값을 입력 받기 위해서 
//		total += ary[i];
//		i++;
//	}
//	printf("\n");
//	std:: cout << total << '\n';
//
//	return 0;
//}