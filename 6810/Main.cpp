#include <iostream>


using namespace std;

int main(void) {

	int ISBN[13]={ 9,7,8,0,9,2,1,4,1,8,0,0,0 };
	int temp;
	int sum = 0;
	int cnt = 0;
	for (int i= 10; i < 13; i++) {//������ 3�� �Է� �ޱ�
		cin >> temp;
		if (temp >= 0 && temp <= 9){
			ISBN[i] = temp;
		}
	}

	for (int i = 0; i < 13; i++) {//�������� ������ *1 �ƴϸ�, *3
		if (cnt % 2 == 0) {
			sum = sum + (1 * ISBN[i]);
			cnt++;
		}
		else {
			sum = sum + (3 * ISBN[i]);
			cnt++;
		}
	}
	cout << "The 1-3-sum is " << sum << '\n';
	return 0;
}