#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[101][101];

int visited[101];

int main() {

	int n = 9;
	cin >> n;
	int start = 7;
	int end = 3;
	cin >> start >> end;

	int m = 7;
	cin >> m;

	int y = 0;
	int x = 0;

	for (int i = 0; i < m; i++) {
		cin >> y >> x;
		arr[y][x] = 1;
		arr[x][y] = 1;
	}
	/*int y = 1;
	int x = 2;
	arr[y][x] = 1;
	arr[x][y] = 1;
		
	y = 1; x = 3;
	arr[y][x] = 1;
	arr[x][y] = 1;

	y = 2;
	x = 7;
	arr[y][x] = 1;
	arr[x][y] = 1;

	y = 2;
	x = 8;
	arr[y][x] = 1;
	arr[x][y] = 1;

	y = 2;
	x = 9;
	arr[y][x] = 1;
	arr[x][y] = 1;


	y = 4;
	x = 5;
	arr[y][x] = 1;
	arr[x][y] = 1;

	y = 4; 
	x = 6;
	arr[y][x] = 1;
	arr[x][y] = 1;*/


	queue<int> q;
	q.push(start);
	visited[start] = 1;
	

	int cur = 0;
	int find = false;
	
	
	while (!q.empty()) {
		
		
		cur = q.front();

		//cout << "현재 cur = " << cur << endl;

		if (find) {
			//cout<< "break 발동";
			break;
		}
		q.pop();

		for (int i = 1; i <= n; i++) {
			if ((arr[cur][i] == 1) && (visited[i] == 0)) {
				
				q.push(i);
				//cout << "Q 에 " << i << "추가" << endl;
				visited[i] = visited[cur]+1;

				if (i == end) {
					find = true;
				}

			}


		}
		

	}

	cout << visited[end] - 1;




}