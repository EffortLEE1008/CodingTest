#include <iostream>

using namespace std;


int arr[1001];


int dp(int n) {

	if (n == 1) {
		return 1;
	}

	else if (n == 2) {
		return 2;
	}

	else if (arr[n] != 0) {
		return arr[n];
	}

	arr[n] = (dp(n - 1) + dp(n - 2)) % 10007;

	return arr[n];

}

int main()
{

	int N = 0;
	cin >> N;

	cout << dp(N);




}