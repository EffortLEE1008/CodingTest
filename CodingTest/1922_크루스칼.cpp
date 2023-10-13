#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int parent[1001];

int get_parent(int parent[], int num) {
	if (parent[num] == num) {
		return parent[num];
	}

	parent[num] = get_parent(parent, parent[num]);
	return parent[num];

}

void make_union(int parent[], int a, int b) {

	a = get_parent(parent, a);
	b = get_parent(parent, b);

	if (a < b) {
		parent[b] = a;
	}
	else if (b < a) {
		parent[a] = b;
	}



}


bool find_union(int parent[], int a, int b) {
	a = get_parent(parent, a);
	b = get_parent(parent, b);

	if (a == b)
		return 1;
	else
		return 0;

}


int main() {

	vector<pair<int, pair<int, int>>> v;
	int N, M;
	int a, b, cost;
	int result = 0;
	
	cin >> N;
	cin >> M;

	for (int i = 1; i <= N; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < M; i++) {
		cin >> a >> b >> cost;
		v.push_back(make_pair(cost, make_pair(a, b)));

	}



	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		if (!find_union(parent, v[i].second.first, v[i].second.second)) {
			make_union(parent, v[i].second.first, v[i].second.second);
			result += v[i].first;

			/*cout << i << "번째 연결됐습니다." << endl;
			
			for (int j = 1; j <= 6; j++) {
				cout << parent[j] << " ";
			}
			cout << endl;
			cout << endl;*/

		}
		

	}
	cout << result;

	








}