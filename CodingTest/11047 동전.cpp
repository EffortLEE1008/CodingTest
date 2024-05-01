#include <iostream>
#include <vector>

using namespace std;


int arr[10];

int main() {

	int N = 10;
	int K = 4200;

	vector<int> v;
	vector<int> count;

	v.push_back(1);
	v.push_back(5);
	v.push_back(10);
	v.push_back(50);
	v.push_back(100);
	v.push_back(500);
	v.push_back(1000);
	v.push_back(5000);
	v.push_back(10000);
	v.push_back(50000);

	int max = 0;


	//cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == K) {
			return 1;
		}

		else if (v[i] > K) {
			max = i - 1;
			break;
		}
	}

	int temp;
	int ex;

	temp = K / v[max];
	ex = K % v[max];

	count.push_back(temp);

	for (int i = max; i > 0; i--) {
		cout << i << endl;
	}


	



}