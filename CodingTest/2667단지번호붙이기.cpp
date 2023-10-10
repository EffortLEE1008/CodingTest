#include <iostream>
#include <vector>

using namespace std;

const int MAX = 26;

int arr[MAX][MAX];

int main() {
	
	string s = "0110100";

	for (int i = 0; i < s.length(); i++) {
		arr[1][i + 1] = s[i]-'0';
	}

	for (int i = 1; i <= s.length(); i++) {
		cout << arr[1][i];
	}



}