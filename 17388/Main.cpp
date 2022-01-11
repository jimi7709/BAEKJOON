#include <iostream>

using namespace std;


int main(void) {

	int uni[3];
	int i;
	int sum = 0;
	for (i = 0; i <= 2; i++)
	{
		cin >> uni[i];
		sum += uni[i];
	}

	if (sum >= 100) {
		cout << "OK";
	}
	else {
		int min=0;
		for (int i = 1; i <= 2; i++) {
			if (uni[min] > uni[i])
				min = i;
		}
		switch (min) {
		case 0:
			cout << "Soongsil";
			break;
		case 1:
			cout << "Korea";
			break;
		case 2:
			cout << "Hanyang";
			break;
		}
	}

	return 0;
}