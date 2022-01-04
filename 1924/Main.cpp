#include <iostream>
#include <string>
using namespace std;
//������ string �迭�� ��Ÿ����
//�� �� ������ �� �� ���� ���� �迭�� ��Ÿ����
//���� ������ �ִ� 12�� ���� �׸��� 31�� ���� ������
//���� ������ �Է� �ް�, 1�� ���� 12������ �ݺ��Ͽ� �ش��ϴ� ���� ���� ������ ������ ���� �� ���� �����ش�.
//���� �ش��ϴ� ���̶�� ������ �����ְ�
//�������� 7���̹Ƿ� ������ ��� ���� ���� 7�� ����� �̸� string�迭�� �ε����� �̿��ؼ� ����Ѵ�.
int main()
{
	string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int x, y;
	int count = 0;

	cin >> x >> y;  // ��, �� �Է�

	if (x > 12 || x < 1 || y < 1 || y > 31)
		return 0;

	for (int i = 0; i < x; i++)  // 1��~x������ �ݺ�
	{
		if ((i + 1) == x)  // �Է��� ���� i + 1�� ���ٸ�
		{
			count += y;  // ��¥�� ������
		}
		else  // �ƴϸ�
		{
			count += month[i];  // �� ���� �ϼ��� ������
		}
	}

	cout << day[count % 7] << endl;  // ���� ��� ���� �����Ϸ� ������ ������ ���� 

	return 0;
}

//���� �ڵ�

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