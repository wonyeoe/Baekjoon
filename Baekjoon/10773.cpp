#include<iostream>
#include<stack>
using namespace std;

int main() {
	int k;
	cin >> k;

	stack<int> s;

	while (k-- != 0) {
		int x;
		cin >> x;

		if (x == 0) {
			s.pop();
		}
		else {
			s.push(x);
		}
	}


	int result = 0;
	while (!s.empty()) {
		result += s.top();
		s.pop();
	}

	cout << result;
}