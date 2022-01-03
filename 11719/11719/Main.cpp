#include <iostream>
#include <string>
using namespace std;
//공백이 앞에나 뒤에나 가능하면, cin.getline() 를 이용하자.
//그러면 std사용해야함.
//무한 루프 생성(종료 조건 없으므로)


//cin.getline() 함수를 사용할 경우 "출력 초과" 발생.
//string 으로 받아서 getline()사용해서 "출력 초과" 발생.
//-> 문제 조건을 제대로 읽지 않아서 "출력 초과"가 발생하였다.(100줄 제한 고려 안 했음.)

//배열과 cin.getline()를 이용한 경우

int main(void) {
	char stra[101];
	for (int i = 0; i < 100; i++) {
		cin.getline(stra, 101);
		cout << stra << '\n';
	}
	return 0;
}

//string 클래스를 이용한 경우.

//int main(void) {
//		string str;
//	for (int i = 0; i < 100; i++) {
//		getline(cin,str,'\n');
//		cout << str << '\n';
//	}
//	return 0;
//}
