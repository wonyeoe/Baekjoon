#include<iostream>
using namespace std;


/* �ݺ��� -> �ð��ʰ�

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

	//���� ������������ �ø�ó�� : (���� + �и� - 1) / �и�
	//����: int day = (v-a)/(a-b) + 1
	//����: int day = (v-a + a-b -1) / (a-b) + 1
	int day = ((v - b - 1) / (a - b)) + 1 ;

	cout << day;
}