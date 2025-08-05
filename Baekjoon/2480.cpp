#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int money;

	if (a == b && b == c) { // °°Àº ´« 3°³
		money = 10000 + a * 1000;
	}
	else if ((a == b) && (b != c) || (a == c) && (b != c) || (c == b) && (b != a)) {
		if ((a == b) && (b != c)) {
			money = 1000 + a * 100;
		}
		else if ((a == c) && (b != c)) {
			money = 1000 + a * 100;
		}
		else if ((c == b) && (b != a)) {
			money = 1000 + b * 100;
		}
	} // °°Àº ´« 2°³
	else {
		int max;
		if (a < b) {
			if (b > c) {
				max = b;
			}
			else {
				max = c;
			}
		}
		else {
			if (a > c) {
				max = a;
			}
			else {
				max = c;
			}
		}
		money = max * 100;
	} //¸ðµÎ ´Ù¸¥ ´«

	cout << money;
}