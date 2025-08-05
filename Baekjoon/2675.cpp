#include<iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test-- != 0) {
		int n;
		string s;
		cin >> n >> s;

		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < n; j++) {
				cout << s[i];
			}
		}
		cout << endl;
	}
}