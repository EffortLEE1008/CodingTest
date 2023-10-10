#include <iostream>
#include <vector>
#include <string>
#include <queue>


using namespace std;

const int MAX = 100;

int arr[MAX][MAX];
int visited[MAX][MAX];


int main() {

	int n;
	int m;
	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j]-'0';

		}
	}

	//string s = "110110";
	//for (int i = 0; i < m; i++) {
	//	arr[0][i] = s[i] - '0';
	//	
	//}

	//s = "110110";
	//for (int i = 0; i < m; i++) {
	//	arr[1][i] = s[i] - '0';
	//	
	//}

	//s = "111111";
	//for (int i = 0; i < m; i++) {
	//	arr[2][i] = s[i] - '0';
	//}

	//s = "111101";
	//for (int i = 0; i < m; i++) {
	//	arr[3][i] = s[i] - '0';
	//}

	vector<pair<int, int>> dir;
	dir.push_back(make_pair(-1, 0));//╩С
	dir.push_back(make_pair(1, 0));//го
	dir.push_back(make_pair(0, -1));//аб
	dir.push_back(make_pair(0, 1));//©Л

	queue<pair<int, int>> q;
	
	q.push(make_pair(0, 0));
	visited[0][0] = 1;

	int next_y=0;
	int next_x = 0;


	while(!q.empty()) {

		int cur_y = q.front().first;
		int cur_x = q.front().second;

		if ((cur_y == n - 1) && (cur_x == m - 1)) {
			cout << visited[cur_y][cur_x] << endl;
			break;
		}

		q.pop();


		for (int i = 0; i < dir.size(); i++) {
			
			next_y = cur_y + dir[i].first;
			next_x = cur_x + dir[i].second;
			
			if (arr[next_y][next_x] == 1) {

				if ((0 <= next_y && next_y < n) && (0 <= next_x && next_x < m)) {

					if (visited[next_y][next_x] == 0) {
						q.push(make_pair(next_y, next_x));
						visited[next_y][next_x] = visited[cur_y][cur_x] + 1;
					}


				}
			}

		}


	}



}