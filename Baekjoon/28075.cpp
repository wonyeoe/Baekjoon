#include<iostream>
using namespace std;

int n, m;
int missions[2][3];
int answer = 0;

//현재 날, 현재 진척도 합, 전 임무 장소
void solve(int day, int score, int pre) {
	if (day == n) {
		if (score >= m) {
			answer++;
		}
		return;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
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
	cin >> n >> m;

	for (int i = 0; i < 2; i++) { 
		for (int j = 0; j < 3; j++) {
			cin >> missions[i][j];
		}
	}

	solve(0, 0, -1);
	cout << answer;

}