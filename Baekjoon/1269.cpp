#include<iostream>
#include<set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	
	set<int> set;
	for (int i = 0; i < a + b; i++) {
		int x;
		cin >> x;
		set.insert(x); //알아서 합집합 됨(중복X)
	}

	int s = set.size(); //합집합 개수
	int c = a + b - s; // 교집합 개수

	cout << s - c;
}