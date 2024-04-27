#include <iostream>
#include <vector>
using namespace std;



int main() {


	vector<unsigned long long> v;

	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	

	for (int i = 3; i <101 ; i++) {
		unsigned long long tmp = v[i-2]+v[i-3];
		v.push_back(tmp);

	}
	//for (int i = 0; i < v.size(); i++) {
	//	cout <<i<<"¹øÀç´Â = " << v[i] <<endl;

	//}
	//cout << endl;

	int T;
	int N;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << v[N] << endl;
	}
	



}