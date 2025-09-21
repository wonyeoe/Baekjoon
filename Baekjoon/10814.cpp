#include<iostream>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	multimap<int, string> map; //중복O, key정렬

	int n;
	cin >> n;
	while (n-- != 0) {
		int age;
		string name;

		cin >> age >> name;

		map.insert({age, name});
	}

	for (pair<int, string> item : map) {
		cout << item.first << " " << item.second << "\n";
 	}
}