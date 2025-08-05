#include<iostream>
#include<vector>
using namespace std;

struct compare {
	bool operator()(const int& lhs, const int& rhs) {
		return lhs < rhs;
	} // 최소 힙 기반
};

class heap {
public:
	heap();
	int size();
	bool empty();
	void push(int e); //원소e 삽입
	int top(); // 우선순위 가장 높은 원소 리턴
	void pop(); //우선순위 가장 높은 원소 삭제
private:
	compare C;
	vector<int> arr;

	void swap(int idx1, int idx2);
	void upHeap(int idx);
	void downHeap(int idx);
};

heap::heap() {
	arr.push_back(0);
}
int heap::size() {
	return arr.size() - 1;
}
bool heap::empty() {
	return size() == 0;
}
void heap::swap(int idx1, int idx2) {
	arr[0] = arr[idx1]; //비어있는 인덱스0 이용
	arr[idx1] = arr[idx2];
	arr[idx2] = arr[0];
}
void heap::push(int e) {
	arr.push_back(e);
	upHeap(size());
}
int heap::top() {
	if (empty()) {
		return -1;
	}
	return arr[1]; //힙의 루트에 저장된 원소 리턴
}
void heap::pop() { //우선순위가 가장 높은 원소 삭제
	if (empty()) {
		cout << "0\n";
		return;
	}
	cout << arr[1] << '\n';
	swap(1, size()); //루트와 lastNode 교체
	arr.pop_back(); //lastNode 제거 (기존의 루트값)
	downHeap(1); //루트에서 downHeap 수행
}
void heap::upHeap(int idx) {
	if (idx == 1) { //루트에 도달할 경우 종료
		return;
	}

	int parent = idx / 2;
	if (!C(arr[parent], arr[idx])) { //heap-order 만족X
		swap(parent, idx);
		upHeap(parent); //부모노드에서 업힙 수행
	}
}
void heap::downHeap(int idx) {
	int left = 2 * idx;
	int right = 2 * idx + 1;
	int child;

	if (left > size()) { //두 자식 모두 존재X ->종료
		return;
	}
	else if (left == size()) { //왼쪽 자식만 존재 ->child에 왼쪽자식 대입
		child = left;
	}
	else { //두 자식 모두 존재
		if (C(arr[left], arr[right])) { //왼쪽이 오른쪽보다 작으면
			child = left; //child에 두 자식 중 우선순위가 더 높은 자식 대입
		}
		else {
			child = right;
		}
	}

	if (!C(arr[idx], arr[child])) { // idx 가 child보다 크면
		swap(child, idx);
		downHeap(child); // 해당자식을 기준으로 다운힙 수행
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	heap h;
	int N;
	cin >> N;
	while (N-- != 0) {
		long int x;
		cin >> x;
		if (x == 0) {
			h.pop();
		}
		else {
			h.push(x);
		}
	}
}