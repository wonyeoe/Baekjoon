#include<iostream>
using namespace std;

int main() {
	int arr[6] = {1,1,2,2,2,8};
	int find[6];

	for (int i = 0; i < 6; i++) {
		int a;
		cin >> a;
		find[i] = a;
	}

	int newArr[6];
	for (int i = 0; i < 6; i++) {
		newArr[i] = arr[i] - find[i];
	}

	for (int i = 0; i < 6; i++) {
		cout << newArr[i] << " ";
	}
}