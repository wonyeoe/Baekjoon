#include<iostream>
#include<vector>
using namespace std;

struct compare {
	bool operator()(const int& lhs, const int& rhs) {
		return lhs < rhs;
	} // �ּ� �� ���
};

class heap {
public:
	heap();
	int size();
	bool empty();
	void push(int e); //����e ����
	int top(); // �켱���� ���� ���� ���� ����
	void pop(); //�켱���� ���� ���� ���� ����
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
	arr[0] = arr[idx1]; //����ִ� �ε���0 �̿�
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
	return arr[1]; //���� ��Ʈ�� ����� ���� ����
}
void heap::pop() { //�켱������ ���� ���� ���� ����
	if (empty()) {
		cout << "0\n";
		return;
	}
	cout << arr[1] << '\n';
	swap(1, size()); //��Ʈ�� lastNode ��ü
	arr.pop_back(); //lastNode ���� (������ ��Ʈ��)
	downHeap(1); //��Ʈ���� downHeap ����
}
void heap::upHeap(int idx) {
	if (idx == 1) { //��Ʈ�� ������ ��� ����
		return;
	}

	int parent = idx / 2;
	if (!C(arr[parent], arr[idx])) { //heap-order ����X
		swap(parent, idx);
		upHeap(parent); //�θ��忡�� ���� ����
	}
}
void heap::downHeap(int idx) {
	int left = 2 * idx;
	int right = 2 * idx + 1;
	int child;

	if (left > size()) { //�� �ڽ� ��� ����X ->����
		return;
	}
	else if (left == size()) { //���� �ڽĸ� ���� ->child�� �����ڽ� ����
		child = left;
	}
	else { //�� �ڽ� ��� ����
		if (C(arr[left], arr[right])) { //������ �����ʺ��� ������
			child = left; //child�� �� �ڽ� �� �켱������ �� ���� �ڽ� ����
		}
		else {
			child = right;
		}
	}

	if (!C(arr[idx], arr[child])) { // idx �� child���� ũ��
		swap(child, idx);
		downHeap(child); // �ش��ڽ��� �������� �ٿ��� ����
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