#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;

	while (i <= n){
		int j = n - i;
		while (j-- != 0) {
			cout << " ";
		}

		int k = i;
		while (k != 0) {
			cout << k;
			k--;
		}

		cout << "\n";
		i++;
	}	
}