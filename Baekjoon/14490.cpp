#include<iostream>
#include<string>
using namespace std;

int gcd(int a, int b) { //�ִ����� ���ϱ�
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int splitIdx = s.find(':'); //string���� ':'�ε��� ã��

	//stoi : ���ڷθ� �̷���� ���ڿ�->������ ��ȯ
	//substr(pos, len) : pos���� ������ len��ŭ�� ���ڿ� �����̽�
	//substr(pos) : pos���� ������

	int n = stoi(s.substr(0, splitIdx));
	int m = stoi(s.substr(splitIdx + 1));

	cout << n / gcd(n, m) << ":" << m / gcd(n, m) << "\n";
}

/* 

int n, m;
char dummy; //������
cin >> n >> dummy >> m;    //�ڵ����� int : int ����


*/