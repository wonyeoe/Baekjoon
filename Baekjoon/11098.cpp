#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n; //�׽�Ʈ ���̽�
	cin >> n;

	while (n-- != 0) {
		int p; // ���� ��
		cin >> p;

		vector<pair<int, string>> v; //���� ���

		while (p-- != 0) { //���� ����
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