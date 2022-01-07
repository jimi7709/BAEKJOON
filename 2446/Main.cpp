#include <iostream>

using namespace std;

int main(void) {

	int N;

	cin >> N;

	if (N >= 1 && N <= 100) {
		for (int i = 0; i <N; i++) {
			for (int k = 0; k < 1; k++) {
				cout << " ";
			}
			for (int j = 1+2*(N-1); j >= 1; j--) {
				cout << "*";
			}
			cout << "\n";
		}
	}

	//정답코드
	//가장 바깥의 for문의 초기식과 조건식 설정이 아주 중요하다.
	for (int i = N; i >= 1; i--) {//1번줄 부터 중간줄까지
		for (int j = 0; j < N - i; j++) {//다음 줄로 이동할 때마다 -i 
			cout << " "; 
		} 
		for (int j = 0; j < 2 * i - 1; j++) {//먼저 2*i를 한 뒤에 -1씩 감소
			cout << "*"; 
		} 
		cout << "\n";
	}
	for (int i = 2; i <= N; i++) {//N-1번 만큼 반복
		for (int j = 0; j < N - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}




	return 0;
}