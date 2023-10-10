#include <iostream>
#include <vector>
#include <string>



using namespace std;

bool visited[9];

void dfs(string s, int cnt ,int n);

int main() {
	string s = "";


	dfs(s, 0, 3);

	

}


void dfs(string s, int cnt, int n) {

	if (cnt == n) {
		cout << s << endl;
		return;
	}

	for (int i = 1; i <= 3; i++) {

		if (visited[i] == true)
			continue;

		s = s + to_string(i) + " ";
		visited[i] = true;

		dfs(s, cnt + 1, n);

		int length = s.length() - 2;
		if (length <= 0)
			length = 0;
		s.erase(length);
		visited[i] = false;

		

		

	}


}