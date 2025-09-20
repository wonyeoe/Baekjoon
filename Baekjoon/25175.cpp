#include<iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	cout << (m - 1 + (k - 3) % n + n) % n + 1;
}

/*
**원형 배열에서 (M에서 K-3만큼 이동했을 때의 사람 번호) 구하기

x = 이동량 = k - 3 일때,
(m+x) % n이 0이면 n번 사람, 0이 아니면 결과값번 사람
=> (m-1 + x) % n + 1 
=> (m-1 + k-3) % n + 1
+ (k-3) 음수 보정
=> (m-1 + (k-3)%n + n) % n + 1

*/