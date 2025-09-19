#include<iostream>
#include<queue>
using namespace std;

int main() {
	int t;
	cin >> t;

	queue<int> s;

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
				cout << s.front() << endl;
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
		else if (command == "front") {
			if (s.empty()) {
				cout << -1 << endl;
				continue;
			}
			cout << s.front() << endl;
		}
		else if (command == "back") {
			if (s.empty()) {
				cout << -1 << endl;
				continue;
			}
			cout << s.back() << endl;
		}
	}
}