#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s = "int";
	
	int count = n / 4;
	for (int i = 0; i < count; i++) {
		s.insert(0, "long ");
	}

	cout << s;
}