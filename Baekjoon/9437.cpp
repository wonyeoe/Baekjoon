#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	while (1) {
		int n, p;
		cin >> n ;
		if (n == 0) {
			break;
		}
		cin >> p;

		int k = (p - 1) / 2;

		vector<int> v;
		v.push_back(2 * k + 1);
		v.push_back(2 * k + 2);
		v.push_back(n - 2 * k - 1);
		v.push_back(n - 2 * k);

		remove(v.begin(), v.end(), p);
		v.pop_back();

		sort(v.begin(), v.end());

		for (int i : v) {
			cout << i << " ";
		}
		cout << "\n";
	}
}

/*
같은 면 합 = n+1
같은 종이 = 1, 2, n -1, n ----> 0번째 장
			3, 4 , n-3, n-2 -----> 1번째 장
			2k+1, 2k+2, n-(2k+1), n-2k ----> k번째 장

1, 2쪽은 0번째 장
3, 4쪽은 1번째 장
2k+1, 2k+2쪽은 (2k+1 - 1)/2 = (2k+2 - 1)/2 = k번째 장

*/