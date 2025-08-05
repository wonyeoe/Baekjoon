#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	deque<pair<int, int>> dq;

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;
		dq.push_back({ i, num });
	}

	for (int i = 0; i < N; i++) {
		int num = dq.front().second;
		cout << dq.front().first << " ";
		dq.pop_front();

		if (num > 0) {
			for (int j = 0; j < num - 1; j++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int j = 0; j < -num; j++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	
}