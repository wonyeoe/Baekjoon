#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n; //테스트 케이스
	cin >> n;

	while (n-- != 0) {
		int p; // 선수 수
		cin >> p;

		vector<pair<int, string>> v; //선수 목록

		while (p-- != 0) { //선수 정보
			int c;
			string name;
			cin >> c >> name;
			
			v.push_back(make_pair(c, name));
		}

		int max = 0;
		pair<int, string> maxPair;

		for (int i = 0; i < v.size(); i++) {
			if (v[i].first > max) {
				max = v[i].first;
				maxPair = v[i];
			}
		}

		cout << maxPair.second << endl;
	}
}