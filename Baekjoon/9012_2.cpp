#include<iostream>
#include<stack>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t-- != 0) {
		string s;
		cin >> s;

		stack<char> stk;
		bool valid = true;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				stk.push(s[i]);
			}
			else {
				if (stk.size() == 0) {
					cout << "NO\n";
					valid = false;
					break;
				}
				else {
					stk.pop();
				}
			}
		}

		if (!valid) {
			continue;
		}
		if (stk.empty()) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

	}
}