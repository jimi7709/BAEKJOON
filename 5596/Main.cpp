#include <iostream>

using namespace std;


int main(void) {

	int iInfo, iMath, iSci, iEng;
	int aInfo, aMath, aSci, aEng;
	int sMin=0, sMan=0;
	int T = 0;
	int S = 0;
	cin >> iInfo>>iMath>>iSci>>iEng;
	cin >> aInfo >> aMath >> aSci >> aEng;
	if (iInfo >= 0 && iMath >= 0 && iSci >= 0 && iEng >= 0 && aInfo >= 0 && aMath >= 0 && aSci >= 0 && aEng >= 0) {
		if (iInfo <= 100 && iMath <= 100 && iSci <= 100 && iEng <= 100 && aInfo <= 100 && aMath <= 100 && aSci <= 100 && aEng <= 100) {
			sMin = iInfo + iMath + iSci + iEng;
			sMan = aInfo + aMath + aSci + aEng;
			if (sMin > sMan) {
				T = sMin;
			}
			else if (sMin < sMan) {
				T = sMan;
			}
			else if (sMin == sMan) {
				S = sMin;
				cout << S<<'\n';
				return 0;
			}
		}
	}

	cout << T;
	return 0;
}