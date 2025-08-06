#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<char> v; // ���� ����
	stack<int> s;
	int now = 1;

	for (int i = 0; i < n; i++) {
		int target; // �̾Ƴ��� �ϴ� ��
		cin >> target;

		// top���� ū �� ���
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