#include <iostream>
#include <string.h>
//�ҿ� �ð� 1�ð� 30��.
//�ҿ� �ð� 15��.
//���� ��ȣ�� ����ؼ� ���ð��, is_open()�Լ��� ���ѷ����� ������.
using namespace std;





























//char OPEN[1] = { '('};
//char CLOSE[1] = { ')' };
//
//
//void push(char expr[],char ch,int *top) {
//	*top = *top + 1;
//	expr[*top] = ch;
//}
//
//int is_open(char OPEN[], char ch) {
//	for (int i = 0; i < strlen(OPEN); i++) {
//		if (OPEN[i] == ch)
//			return i;
//	}
//	return -1;
//}
//
//int is_close(char CLOSE[],char ch) {
//	for (int i = 0; i < strlen(CLOSE); i++) {
//		if (CLOSE[i] == ch)
//			return i;
//	}
//	return -1;
//}
//
//char pop(char expr[],int *top){
//	char temp = expr[*top];
//	expr[*top] = 0;
//	*top = *top - 1;
//	return temp;
//}
//
//int ist_empty(char expr[],int *top) {
//	if (*top <= 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//void is_balanced(char expr[], int *top, int balanced, int *index) {
//		string yes = "YES";
//		string no = "NO";
//		while (balanced && *index < strlen(expr)) {
//			char ch = expr[*index];
//			if (is_open(OPEN, ch) > -1)
//			{
//				push(expr, ch, top);
//			}
//			else if (is_close(CLOSE, ch) > -1)
//			{
//				balanced = 0;
//				break;
//			}
//			char top_ch = pop(expr, top);
//			if (is_open(OPEN, top_ch) != is_close(CLOSE, ch))
//			{
//				balanced = 0;
//			}
//			index++;
//		}
//		int temp;
//		temp = balanced;
//		if (temp== 1 && ist_empty(expr, top) == 1) {
//			//balanced �� 1�� �����ϴ� �ڵ尡 ��� �ִ°�??
//			cout << yes << '\n';
//		}
//		else
//			cout << no << '\n';
//		//return (*balanced == 1 && ist_empty(expr, top) == 1);
//	}
//int main(void) {
//
//	char expr[50] = { 0, };
//	int balanced = 1;
//	int index = 0;
//	int top = -1;
//	int T;
//
//	cin >> T;
//	for (int index = 0; index < T; index++) {
//		cin >> expr;
//		is_balanced(expr, &top, balanced, &index);
//	}
//
//	return 0;
//}