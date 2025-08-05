#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int max;

	if (a % 10 > b % 10) {
		max = a;
	}
	else if (a % 10 < b % 10) {
		max = b;
	}
	else {
		if ((a % 100) / 10 > (b % 100 / 10)) {
			max = a;
		}
		else if ((a % 100) / 10 < (b % 100 / 10)) {
			max = b;
		}
		else {
			if (a / 100 > b / 100) {
				max = a;
			}
			else if (a / 100 < b / 100) {
				max = b;
			}
		}
	}

	cout << (max % 100) % 10 << (max % 100) / 10 << max / 100;
}