#include <iostream>
#include <vector>

int arr[1001][3];

using namespace std;

int min(int a, int b) {

	if (a < b)
		return a;
	else if (b < a)
		return b;


}

int main() {


	int N=0;

	cin >> N;
	


	for (int i = 1; i <= N; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

		arr[i][0] = arr[i][0] + min(arr[i - 1][1], arr[i-1][2]);
		arr[i][1] = arr[i][1] + min(arr[i - 1][0], arr[i - 1][2]);
		arr[i][2] = arr[i][2] + min(arr[i - 1][0], arr[i - 1][1]);
	}


	int min = 999999;

	for (int i = 0; i < 3; i++) {
		if (arr[N][i] < min)
			min = arr[N][i];
	}

	cout << min << endl;
	


}



