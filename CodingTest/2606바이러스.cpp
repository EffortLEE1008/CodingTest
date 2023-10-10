#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX=101;

int arr[MAX][MAX];
int visited[MAX];

int main() {

	int count = 0;

	int N = 7;
	int M = 6;
	
	cin >> N;
	cin >> M;

	int k = 1;
	int l = 2;

	for (int i = 0; i < M; i++) {
		cin >> k >> l;

		arr[k][l] = 1;
		arr[l][k] = 1;

	}
	/*int k = 1;
	int l = 2;

	

	arr[k][l] = 1;
	arr[l][k] = 1;

	k = 2;
	l = 3;

	arr[k][l] = 1;
	arr[l][k] = 1;

	k = 1;
	l = 5;

	arr[k][l] = 1;
	arr[l][k] = 1;

	k = 5;
	l = 2;

	arr[k][l] = 1;
	arr[l][k] = 1;

	k = 5;
	l = 6;

	arr[k][l] = 1;
	arr[l][k] = 1;

	k = 4;
	l = 7;

	arr[k][l] = 1;
	arr[l][k] = 1;*/

	queue<int> q;
	q.push(1);

	visited[0] = 1;
	visited[1] = 1;

	
	int cur_y = 0;

	while (!q.empty()) {

		
		cur_y = q.front();

		q.pop();


		for (int i = 1; i <= N; i++) {
			if (arr[cur_y][i] == 1 && visited[i]==0) {

				q.push(i);
				visited[i] = 1;

			}


		}

		

	}

	for (int i = 1; i <= N; i++) {
		if (visited[i] == 1)
			count = count + 1;
	}
	
	count -= 1;
	cout << count << endl;

		
	


}