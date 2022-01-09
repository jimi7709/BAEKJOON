#include <iostream>

using namespace std;

// push X
// pop
//size
// empty
//top
//N�� ����
//ù° �ٿ� ����� ��
//��° �ٺ��� ��ɾ� + [��]
//[��]�� ����  
//�Է��� ������ ���.


//���ð� ������ top�� ���������� �� ��� ���� 0���� �����Ǳ� ������
//���������� ����ϱ� �����.

void push(int stack[],int *tp,int x) {
	*tp = *tp + 1;
	int temp = *tp;
	stack[temp] = x;
}

int pop(int stack[], int* tp) {
	int temp = stack[*tp];
	

	if (*tp == -1) {
		return -1;
	}
	//�����ڵ�
	//for (int i = 0; i < 10000; i++) {
	//	if (stack[i] == 0)
	//		check = 1;
	//	else if (stack[i] != 0)
	//	{
	//		check = 0;
	//		break;
	//	}
	//}
	//if (check == 1) {
	//	return -1;
	//}
	else {
		int temp = stack[*tp];

		stack[*tp] = 0;
		if (*tp != -1) {
			*tp = *tp - 1;
		}
		return temp;
	}
}

int size(int stack[], int* tp) {
	int cnt = 0;
	for (int i = 0; i <9999; i++) {
		if (*(stack+i) >= 1){
			cnt++;
		}
	}
	return cnt;
}

bool empty(int stack[]) {
	int check = 0;
	for (int i = 0; i < 10000; i++) {
		if (stack[i] == 0)
			check = 1;
		else if (stack[i] != 0)
		{
			check = 0;
			break;
		}
	}
	return check;
}

int top(int stack[],int *tp) {
	int temp=*tp;
	if (stack[temp] == 0)
		return -1;
	else
		return stack[temp];
}

int main(void) {
	int stack[10000] = { 0, };
	int tp = -1;//stack�� top�̴�. top�� ���� -1�� ����, 0���� ���� ����������
	int N;
	cin >> N;
	if (N >= 1 && N <= 10000) {//stringŬ������ compare()�� ���� �Է¹ޱ�
		//char input[6];
		string input;
		string po = "pop";
		string pu = "push";
		string si = "size";
		string em = "empty";
		string to = "top";
		for (int i = 1; i <= N; i++) {
			cin >> input;
			int output;
			if (input.compare(pu)==0) {
				int temp;
				cin >> temp;
				push(stack,&tp,temp);
			}
			else if(input.compare(po) == 0) {
				output = pop(stack,&tp);
				cout << output << '\n';
			}
			else if (input.compare(si) == 0) {
				output = size(stack,&tp);
				cout << output<<'\n';
			}
			else if (input.compare(em) == 0) {
				output = empty(stack);
				cout << output << '\n';
			}
			else if (input.compare(to) == 0){
				output = top(stack,&tp);
				cout << output << '\n';
			}
		}
	}
	return 0;
}