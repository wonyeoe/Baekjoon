#include<iostream>
#include<stack>
using namespace std;

int main() {
	int t;
	cin >> t;

	stack<int> s;
	
	while (t-- != 0) {
		string command;
		cin >> command;

		if (command == "push") {
			int n;
			cin >> n;

			s.push(n);
		}
		else if (command == "pop") {
			if (s.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (command == "size") {
			cout << s.size() << endl;
		}
		else if (command == "empty") {
			if (s.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else if (command == "top") {
			if (s.empty()) {
				cout << -1 << endl;
				continue;
			}
			cout << s.top() << endl;
		}
	}
}