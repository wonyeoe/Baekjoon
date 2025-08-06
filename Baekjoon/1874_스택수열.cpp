#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<char> v; // 정답 저장
	stack<int> s;
	int now = 1;

	for (int i = 0; i < n; i++) {
		int target; // 뽑아내야 하는 수
		cin >> target;

		// top보다 큰 거 출력
		if (s.empty() || s.top() < target) {
			for (int j = now; j <= target; j++) {
				s.push(j);
				v.push_back('+');
				now++;
			}
			s.pop();
			v.push_back('-');
		}
		else if (target == s.top()) {
			s.pop();
			v.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (char c : v) {
		cout << c << "\n";
	}

}