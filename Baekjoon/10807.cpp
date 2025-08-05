#include<iostream>
using namespace std;

int main() {
	int count = 0;
	int arr[100];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		arr[i] = n;
	}
	int v;
	cin >> v;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v) {
			count++;
		}
	}
	cout << count;
}