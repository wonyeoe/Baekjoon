#include<iostream>
#include<string>
using namespace std;
int main() {
	int count = 1;
	string s;
	getline(cin, s);
	
	for (int i = 1; i < s.length()-1; i++) {
		if (s[i] == ' ') {
			count++;
		}
	}
	if (s.length() == 1 && s[0] == ' ') {
		count = 0;
	}
	cout << count;
}