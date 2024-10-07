#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int N;
	int p;
	vector<int> vec;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> p;
		vec.push_back(p);
	}


	sort(vec.begin(), vec.end());

	int start = 0;

	int sum = 0;

	while (start <= vec.size()) {

		for (int i = 0; i < start; i++) {

			sum = sum + vec[i];
		}

		start++;

	}
	cout << sum << endl;

	cout << 'a' - '0' << endl;


	int a[5];
	a[0] = 0;
	a[1] = 1;
	

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	

}