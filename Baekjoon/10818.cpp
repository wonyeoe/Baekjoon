#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << min << " " << max;
	delete[]arr;
}