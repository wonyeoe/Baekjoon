#include<iostream>
using namespace std;

int main() {
	int arr[10000];
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			cout << arr[i] << " ";
		}
	}
}