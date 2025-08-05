#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int* basket = new int[n + 1];

	for (int i = 1; i <= n + 1; i++) {
		if (i == n + 1) {
			break;
		}
		basket[i] = i;
	}

	while (m-- != 0) {
		int i, j;
		cin >> i >> j;
		int temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;
	}

	for (int i = 1; i < n + 1; i++) {
		cout << basket[i] << " ";
	}

	delete[] basket;
}