#include<iostream>
using namespace std;


/* 반복문 -> 시간초과

int main() {
	int a, b, v;
	cin >> a >> b >> v;

	int cur = 0;
	int day = 1;

	while (true) {
		cur += a;
		if (cur >= v) {
			break;
		}
		cur -= b;
		day++;
	}

	cout << day;
}
*/

int main() {
	int a, b, v;
	cin >> a >> b >> v;

	//정수 나눗셈에서의 올림처리 : (분자 + 분모 - 1) / 분모
	//원래: int day = (v-a)/(a-b) + 1
	//수정: int day = (v-a + a-b -1) / (a-b) + 1
	int day = ((v - b - 1) / (a - b)) + 1 ;

	cout << day;
}