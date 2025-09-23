#include<iostream>
#include<set>
using namespace std;

int main() {
	set<string> set;
	int count = 0;
	int n;
	cin >> n;
	while (n-- != 0) {
		string s;
		cin >> s;

		if (s == "ENTER") {
			count += set.size();
			set.clear();
		}
		else {
			set.insert(s);
		}
	}
	count += set.size();
	cout << count;
}