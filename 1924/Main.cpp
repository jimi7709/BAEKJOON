#include <iostream>
#include <string>
using namespace std;
//요일을 string 배열로 나타내고
//각 달 마다의 총 일 수를 정수 배열로 나타내고
//월과 요일은 최대 12월 까지 그리고 31일 까지 있으며
//월과 요일을 입력 받고, 1월 부터 12월까지 반복하여 해당하는 월이 나올 때까지 각각의 월의 총 수를 더해준다.
//만약 해당하는 월이라면 요일을 더해주고
//일주일은 7일이므로 위에서 모두 더한 것을 7로 나투어서 이를 string배열의 인덱스로 이용해서 출력한다.
int main()
{
	string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int x, y;
	int count = 0;

	cin >> x >> y;  // 월, 일 입력

	if (x > 12 || x < 1 || y < 1 || y > 31)
		return 0;

	for (int i = 0; i < x; i++)  // 1월~x월까지 반복
	{
		if ((i + 1) == x)  // 입력한 월이 i + 1과 같다면
		{
			count += y;  // 날짜를 더해줌
		}
		else  // 아니면
		{
			count += month[i];  // 한 달의 일수를 더해줌
		}
	}

	cout << day[count % 7] << endl;  // 합한 모든 날을 일주일로 나누어 요일을 구함 

	return 0;
}

//오답 코드

//int main(void) {
//
//	int x, y;
//	cin >> x >> y;
//	if (x >= 1 && x <= 12 && y >= 1 && y <= 31) {
//		switch (x) {
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			if (y % 7 == 1) {
//				printf("MON");
//			}
//			else if (y % 7 == 2) {
//				printf("TUE");
//			}
//			else if (y % 7 == 3) {
//				printf("WED");
//			}
//			else if (y % 7 == 4) {
//				printf("THU");
//			}
//			else if (y % 7 == 5) {
//				printf("FRI");
//			}
//			else if (y % 7 == 6) {
//				printf("SAT");
//			}
//			else if (y % 7 == 0) {
//				printf("SUN");
//			}
//		}
//	}
//
//	return 0;
//}