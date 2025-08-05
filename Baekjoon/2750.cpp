#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> arr(N);

	for(int i = 0; i < N; i++) {
		int n;
		cin >> n;

		arr[i] = n;
	}

	
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int a : arr) {
		cout << a << "\n";
	}
}