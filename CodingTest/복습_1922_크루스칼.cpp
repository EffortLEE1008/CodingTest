#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int com[1001];

int get_union(int parent[], int n) {

	if (parent[n] == n) {
		return parent[n];
	}

	parent[n] = get_union(parent, parent[n]);
	return parent[n];

}

void make_union(int parent[],int a, int b) {
	a = get_union(parent, a);
	b = get_union(parent, b);

	if (a < b) {
		parent[b] = a;
	}
	else if (b < a) {
		parent[a] = b;
	}
}

bool find_union(int parent[], int a, int b) {
	a = get_union(parent, a);
	b = get_union(parent, b);

	if (a == b)
		return true;
	else
		return false;
}



int main() {

	int N = 9;

	vector<pair<int, pair<int, int>>> cost;
	
	int a, b, c;
	a = 1, b = 2, c = 5;
	cost.push_back(make_pair(c, make_pair(a,b) ) );
	a = 1, b = 3, c = 4;
	cost.push_back(make_pair(c, make_pair(a, b)));
	a = 2, b = 3, c = 2;
	cost.push_back(make_pair(c, make_pair(a, b)));
	a = 2, b = 4, c = 7;
	cost.push_back(make_pair(c, make_pair(a, b)));
	a = 3, b = 4, c = 6;
	cost.push_back(make_pair(c, make_pair(a, b)));
	a = 3, b = 5, c = 11;
	cost.push_back(make_pair(c, make_pair(a, b)));
	a = 4, b = 5, c = 3;
	cost.push_back(make_pair(c, make_pair(a, b)));
	a = 4, b = 6, c = 8;
	cost.push_back(make_pair(c, make_pair(a, b)));
	a = 5, b = 6, c = 8;
	cost.push_back(make_pair(c, make_pair(a, b)));

	for (int i = 1; i <= N; i++) {
		com[i] = i;
	}

	sort(cost.begin(), cost.end());

	for (int i = 0; i < cost.size(); i++) {
		cout << cost[i].first <<" "<<cost[i].second.first << " " << cost[i].second.second<< endl;
	}


	int result = 0;
	for (int i = 0; i < cost.size(); i++) {
		if (!find_union(com, cost[i].second.first, cost[i].second.second)) {
			make_union(com, cost[i].second.first, cost[i].second.second);
			result += cost[i].first;

			cout << "union 발동! "  << cost[i].first<<" 여기 " << endl;
			for (int i = 1; i <= N; i++) {
				cout << com[i] << " ";
			}
			cout << endl << endl;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << com[i] << " ";
	}

	cout << endl;
	cout << result;
	


}