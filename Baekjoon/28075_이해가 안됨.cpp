#include<iostream>
using namespace std;

int n, m;
int cnt = 0; //기여도 >=m 인 경우의 수
int missions[2][3]; // [종류][장소]



//현재 임무수행중인 날, 현재까지의 진척도 합, 직전에 임무를 수행한 장소
void solve(int day, int score, int pre) {
	// base case :임무를 모두 완료한 후 기여도가 m이상이면 count++
	if (day == n) {
		if (score >= m) {
			cnt++;
		}
		return;
	}
	// recursive case: day번째 날의 임무를 마치고 다음 날들 수행
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			//장소가 전날과 같다면 진척도 절반
			if (pre == j) {
				solve(day + 1, score + missions[i][j] / 2, j);
			}
			else {
				solve(day + 1, score + missions[i][j], j);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> missions[i][j];
		}
	}

	solve(0, 0, -1);
	cout << cnt << "\n";
}