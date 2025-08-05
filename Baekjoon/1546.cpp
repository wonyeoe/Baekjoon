#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	double* newArr = new double[N];
	for (int i = 0; i < N; i++) {
		int s;
		cin >> s;
		arr[i] = s;
	}
	int max = arr[0];
	for (int i = 1; i < N; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 0; i < N; i++) {
		newArr[i] = static_cast<double>(arr[i]) / max * 100;
	}
	double total = 0.0;
	for (int i = 0; i < N; i++) {
		total += newArr[i];
	}
	cout.setf(ios::showpoint);
	cout << total / N;

	delete[]arr;
	delete[]newArr;
}