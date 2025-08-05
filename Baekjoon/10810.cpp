#include<iostream>
using namespace std;

int main() {
	int arr[30];
	for (int i = 0; i < 30; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < 28; i++) {
		int s;
		cin >> s;
		arr[s - 1] = 0;
	}
	for (int a : arr) {
		if (a != 0) {
			cout << a << endl;
		}
	}
}