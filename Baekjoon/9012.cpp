#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int n;
	cin >> n;
	while (n-- != 0) {
		bool exit = false;
		stack<char> stk;
		string s;
		cin >> s;

		for (char c : s) {
			if (c == '(') {
				stk.push(c);
			}
			else {
				if (stk.size() == 0) {
					cout << "NO\n";
					exit = true;
					break;
				}
				else {
					stk.pop();
				}
			}
		}
		if (exit == true) {
			continue;
		}
		if (stk.size() == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}