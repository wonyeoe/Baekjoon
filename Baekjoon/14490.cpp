#include<iostream>
#include<string>
using namespace std;

int gcd(int a, int b) { //최대공약수 구하기
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

	int splitIdx = s.find(':'); //string에서 ':'인덱스 찾기

	//stoi : 숫자로만 이루어진 문자열->정수로 변환
	//substr(pos, len) : pos에서 시작해 len만큼의 문자열 슬라이싱
	//substr(pos) : pos부터 끝까지

	int n = stoi(s.substr(0, splitIdx));
	int m = stoi(s.substr(splitIdx + 1));

	cout << n / gcd(n, m) << ":" << m / gcd(n, m) << "\n";
}

/* 

int n, m;
char dummy; //구분자
cin >> n >> dummy >> m;    //자동으로 int : int 구분


*/