#include <iostream>

//���� N�� �Է� �޴´�. N�� ��ŭ ���� �Է¹޾Ƽ� ���� �������� ū �Ÿ�  ã�´�.
//���� �迭�� ������ �����Լ� �ȿ��� �Ѵ�.
//������ top �ʱⰪ�� 0���� ����, -1���� �� �� ���ؾ� �Ѵ�.

//������ ���� ���� �������� ����, �������� ��� �Ǵ� ������ ã�� ���ؼ�
//���� ������ ���� ��� Ǯ���.
//���� ������ ����� ���� ū ����⸦ ã�� �Լ��� �����.-->> stick()
int stick(int stack[],int *top) {//������� ���� ã�� �Լ�.
	//stack�迭 �߿��� ���� �ִ� �� �߿��� �� �ε��� ���� ������ ���鼭 �ݺ�.
	*top = *top - 1;
	int temp = stack[*top];//���ÿ� ���� �� �ε��� ��(�Է� ���� ���� �߿���)
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
		for (int i = 0; i < N; i++) {//N�� ��ŭ �ݺ��ؼ� stack�迭�� ���� ����ִ´�.
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