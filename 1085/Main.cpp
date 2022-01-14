#include <iostream>
//12분 47초 만에 품.
using namespace std;

int main(void) {

	int x, y, w, h;
	int temp[4] = {};//각각의 거리 값을 계산하고 저장할 배열
	int min;
	cin >> x >> y >> w >> h;
	if (w >= 1 && w <= 1000 && h >= 1 && h <= 1000 && x >= 1 && x <= w - 1 && y >= 1 && y <= h - 1) {
		temp[2] = w - x;
		temp[3] = h -y;
		temp[0] = x;
		temp[1] = y;
		min = temp[0];//최소 값을 인덱스 0으로 초기화.
		for (int i = 1; i < 4; i++) {
			if (min > temp[i]) {
				min = temp[i];
			}
		}
	}
	cout << min;
	return 0;
}