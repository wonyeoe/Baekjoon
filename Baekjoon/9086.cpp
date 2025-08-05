#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n-- != 0) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (i == 0 ) {
				cout << s[i];
			}
			if (i == s.length() - 1) {
				cout << s[i];
			}
		}
		cout << endl;
	}
}