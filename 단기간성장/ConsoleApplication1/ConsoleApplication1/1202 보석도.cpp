#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {

	vector<pair<int, int>> vv;

	int N, K;

	vv.push_back(make_pair(65, 1));
	vv.push_back(make_pair(23, 5));
	vv.push_back(make_pair(99, 2));

	sort(vv.begin(), vv.end(), greater<>());

	for (int i = 0; i < vv.size(); i++) {
		cout << vv[i].first << ' ' << vv[i].second << endl;


	}

	for(int i=0; i<k;i++)
	



	
	


}