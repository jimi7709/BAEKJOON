#include <iostream>
//�� 23�� 21�� ���� ǰ.
using namespace std;

int main(void) {

	int p1, s1;//per�� Ȩ��. per:est
	int p2, s2;//est�� Ȩ��. est: per
	int awaye, awayp;//per�� Ȩ���� ���� est��, est�� Ȩ���� ���� per��.
	int per, est;
	cin >> p1 >> s1;
	cin >> p2 >> s2;
	if (p1 >= 0 && p2 >= 0 && s1 >= 0 && s2 >= 0 && p1 <= 20 && s1 <= 20 && p2 <= 20 && s2 <= 20) {
		per = p1 + s2;
		est = s1 + p2;
		awaye = s1;
		awayp = s2;
		if (per > est)
		{
			cout << "Persepolis" ;
			return 0;

		}
		else if (per < est) {
			cout << "Esteghlal" ;
			return 0;

		}
		if (per == est) {
			if (awaye < awayp) {
				cout << "Persepolis";
				return 0;

			}
			else if (awayp < awaye) {
				cout << "Esteghlal";
				return 0;
			}
			else {
				cout << "Penalty";
				return 0;
			}
		}
	}


	return 0;
}