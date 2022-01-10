#include <iostream>

//정수 N을 입력 받는다. N번 만큼 수를 입력받아서 제일 마지막과 큰 거를  찾는다.
//스택 배열의 선언은 메인함수 안에서 한다.
//스택의 top 초기값을 0으로 할지, -1으로 할 지 정해야 한다.

//문제를 곧이 곧대로 이해하지 말고, 문제에서 모순 되는 내용을 찾기 위해서
//직접 임의의 값을 적어서 풀어본다.
//제일 마지막 막대기 보다 큰 막대기를 찾는 함수를 만든다.-->> stick()
int stick(int stack[],int *top) {//막대기의 수를 찾는 함수.
	//stack배열 중에서 값이 있는 것 중에서 끝 인덱스 부터 앞으로 오면서 반복.
	*top = *top - 1;
	int temp = stack[*top];//스택에 제일 끝 인덱스 값(입력 받은 값들 중에서)
	int max = temp;
	int cnt = 1;
	for (int i = *top-1; i >= 0; i--) {
		if (temp < stack[i]&& max<stack[i]) {
			max = stack[i];
			cnt++;
		}
	}
	
	return cnt;
}

using namespace std;

int main(void) {
	int stack[100000] = { 0, };
	int top=0; 
	int output;
	int N;
	cin >> N;
	if (N >= 2 && N <= 100000) {
		for (int i = 0; i < N; i++) {//N번 만큼 반복해서 stack배열에 값을 집어넣는다.
			int h;
			cin >> h;
			if (h >= 1 && h <= 100000) {
				stack[i] = h;
				top++;
			}
			else {
				i--;
			}
		}

		//	cout << "top :" << top<<'\n';
		output = stick(stack, &top);
		cout << output ;
	}

	return 0;
}