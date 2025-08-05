#include<iostream>
#include<map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<string, string> m;

	int N, M;
	cin >> N >> M;

	while (N-- != 0) {
		string ad, pw;
		cin >> ad >> pw;

		m[ad] = pw;
	}

	while (M-- != 0) {
		string findAd;
		cin >> findAd;

		cout << m[findAd] << "\n";
	}
}