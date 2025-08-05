#include<iostream>
using namespace std;

int main() {
	int total = 0;
	int x, n;
	cin >> x >> n;
	while (n-- != 0) {
		int a, b;
		cin >> a >> b;
		total += a * b;
	}

	if (total == x) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}