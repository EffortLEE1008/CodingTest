#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<long> v;


	long min, max;

	cin >> min >> max;
	
	int count = 0;

	long start = 2;

	bool sw = false;

	while (true) {

		if (start > max) {
			break;
		}
		
		if (start == 1) {
			start += 1;
		}

		long tmp = start * start;

		if (tmp < max) {
			v.push_back(tmp);
		}

		start = start + 1;


	}

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << endl;
	//}


	for (long i = min; i <= max; i++) {
		for (long j = 0; j < v.size(); j++) {
			if (i % v[j] == 0) {
				sw = true;
				//cout << "이 숫자는 vector v의 숫자로 나눠집니다. 숫자는 ? " << i << endl;

			}

		}

		if (sw != true) {
			count++;
		}

		sw = false;
	}
	cout << count;

}