#include <iostream>

using namespace std;


int get_parent(int parent[], int n) {
	if (parent[n] == n) {
		return n;				//����Լ��� Ȱ���� ���� �ڱ��ڽ��� ��ȣ�� ������ -> ���߰� �ϱ�
	}

	parent[n] = get_parent(parent, parent[n]);
	return parent[n];

}

void union_parent(int parent[], int a, int b) {

	a = get_parent(parent, a);
	b = get_parent(parent, b);

	if (a < b) {
		parent[b] = a;
	}
	else {

		parent[a] = b;
	}
}

int main() {
	
	int parent[11];
	for (int i = 1; i < 11; i++) {
		parent[i] = i;

		
	}
	cout << endl;
	
	
	union_parent(parent, 1, 2);
	union_parent(parent, 2, 3);
	union_parent(parent, 3, 4);

	for (int i = 1; i < 11; i++) {
		cout << parent[i] << " ";
	}


	




}