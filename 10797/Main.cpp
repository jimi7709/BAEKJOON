#include <iostream>

using namespace std;

int main(void) {

	int date;//날짜
	int carNum;//차량 숫자
	int car[5] = {};//차량의 숫자를 저장할 정수 배열
	int cnt=0;//10부제 위반한 차량

	cin >> date;
	for (int i = 0; i < 5; i++) {
		cin >> carNum;
		if (carNum >= 0 && carNum <= 9) {
			car[i] = carNum;
		}
	}


	for (int i = 0; i < 5; i++) {
		if (date == car[i])
		{
			cnt++;
		}
	}

	cout << cnt << '\n';


	return 0;
}