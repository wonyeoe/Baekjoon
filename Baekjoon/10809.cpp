#include<iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < alphabet.length(); i++) {
		bool found = false;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == alphabet[i]) {
				cout << j << endl;
				found = true;
				break;
			}
		}
		if (!found) {
			cout << -1 << endl;
		}
	}
}