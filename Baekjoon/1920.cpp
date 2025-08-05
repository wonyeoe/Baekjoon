#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
	set<int> s;
	vector<int> v;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		s.insert(a);
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int b;
		cin >> b;
		v.push_back(b);
	}

	for (int i = 0; i < M; i++) {
		if (s.count(v[i]) != 0) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
}