#include <iostream>

using namespace std;

int main(void) {

	int date;//��¥
	int carNum;//���� ����
	int car[5] = {};//������ ���ڸ� ������ ���� �迭
	int cnt=0;//10���� ������ ����

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