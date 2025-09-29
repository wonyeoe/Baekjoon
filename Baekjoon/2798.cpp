#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int arr[100];
	int answer = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				int card = arr[i] + arr[j] + arr[k];

				if (card <= m && card > answer) {
					answer = card;
				}
			}
		}
	}

	cout << answer;
}