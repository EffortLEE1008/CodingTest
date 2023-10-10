#include <iostream>

using namespace std;

int arr[15][15];

int dp(int k, int n) {

	if (k == 0) {
		return n;
	}
	
	if (arr[k][n] != 0) {
		return arr[k][n];
	}

	for (int i = 1; i <= n; i++) {
		arr[k][n] = arr[k][n] + dp(k-1, i);
	}

	return arr[k][n];


}




int main() {

	//int T = 0;
	//int k = 0;
	//int n = 0;

	//cin >> T;

	//for (int i = 0; i < T; i++) {
	//	cin >> k;
	//	cin >> n;

	//	cout << dp(k, n);

	//}
	int k = 14;
	int n = 14;

	cout << dp(k, n) << endl;


	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}






}

