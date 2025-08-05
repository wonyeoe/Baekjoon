#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int m = n;
	int count = 0;

	while (true) {
		int sum = m / 10 + m % 10;
		int newN = (m % 10)*10 + (sum % 10);

		count++;

		if (newN == n) {
			break;
		}
		m = newN;
	}

	cout << count;
}