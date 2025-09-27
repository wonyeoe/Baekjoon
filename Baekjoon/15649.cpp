#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<int> v;
bool vis[10];

void solve(int depth) {
	//base case: 수열의 길이(depth)가 m -> 출력
	if (depth == m) {  
		for (int i = 0; i < m; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
		return;
	}

	//recursive case
	for (int i = 1; i <= n; i++) {
		if (vis[i]) {
			continue;
		}
		
		v.push_back(i); 
		vis[i] = true;

		solve(depth + 1);

		vis[i] = false;
		v.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	solve(0);
}