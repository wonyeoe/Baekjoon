#include<iostream>
#include<vector>
using namespace std;

int n;
int ans = 0; // 최댓값
bool vis[10]; // index 방문 여부
vector<int> arr; // 숫자 저장
vector<int> vec; // 수열 저장

void solve(int depth) {
	// base case
	if (depth == n) {
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			sum += abs(vec[i] - vec[i + 1]);
		}

		ans = max(ans, sum);
		return;
	}

	// recursion case
	for (int i = 0; i < n; i++) {
		if (vis[i]) {
			continue;
		}

		vec.push_back(arr[i]);
		vis[i] = true;

		solve(depth + 1);

		vec.pop_back();
		vis[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	arr.resize(n); // 0으로 채워서 n개 할당
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	solve(0);

	cout << ans;
	
}