#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int arr[501][501];

vector<int> v;

int dfs(vector<int> ve, int n, int max) {

	if (ve.size() == max) {
		for (int i = 0; i < ve.size(); i++) {
			cout << ve[i] << " ";
		}
		cout << endl;
		
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		auto it = find(ve.begin(), ve.end(), i);

		if (it == ve.end()) {
			ve.push_back(i);
		}
		dfs(ve, n, max);

	}

	
	ve.pop_back();




}



int main() {
	dfs(v, 7, 7);







}