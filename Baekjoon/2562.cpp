#include<iostream>
using namespace std;

int main() {
	int arr[9];
	for (int i = 0; i < 9; i++) {
		int n;
		cin >> n;
		arr[i] = n;
	}

	int maxIdx = 0;

	for (int i = 1; i < 9; i++) {
		if (arr[i] > arr[maxIdx]) {
			maxIdx = i;
		}
	}
	cout << arr[maxIdx] << endl;
	cout << maxIdx + 1;
}