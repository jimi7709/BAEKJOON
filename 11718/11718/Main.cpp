#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
//char형 100+1크기 배열 1개
//공백으로 시작하지 않는다.
//공백으로 끝나지 않는다.

//제한시간 10분, 1차 시도 못품.

//c와 c++ 둘 다 해결할 수 있다.
// 1. C++의 string과 getline()의 조합.
// 2. C의 정규표현식을 이용한 풀이.
//반복문이 종료되는 조건은 무엇일까? 문제에서 이와 관련된 언급이 없으므로 신경X.
//공백이 포함된 문자열을 출력하기 위한 코드를 어떻게 짜야 할까? 정규표현식 ->3학년 과정.

//C++
//String 클래스에 대한 이해.
//c-스트링에서는 배열의 크기에 따라서 문자열의 크기가 고정되지만, string에서는 문자열
//크기에 제약이 없다. 그래서 
//getline()에 대한 이해.

//안 되는 경우 -> 왜 안될까? -> 공백으로 시작하는 문자열을 출력할 수 있기 때문이다.
//int main(void) {
//	char str[101];
//	while(1) {
//		cin.getline(str, 101, '\n');//어디에 입력받을지,받는 곳의 크기,문자열 입력 끝 지정문자
//		cout << str<<'\n';
//	}
//	return 0;
//}

int main() {
	char s[101];
	while (scanf("%[^\n]\n", s) == 1) {
		printf("%s\n", s);
	}
	return 0;
}

//int main(void) {
//
//
//	string str;
//	while (true)
//	{
//		getline(cin, str);
//		if (str == "")
//			break;
//		cout << str << '\n';
//	}
//
//	return 0;
//}

//C

//int main(void) {
//	char s[101];
//	while (scanf("%[^\n]\n", s) == 1) {
//		printf("%s\n", s);
//	}
//	return 0;
//}

