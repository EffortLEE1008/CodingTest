#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>


using namespace std;

const int MAX = 25;

int arr[MAX][MAX];
bool visited[MAX][MAX];


int main() {
	
	int N = 7;
	cin >> N;

	vector<pair<int, int>> move_dir;
	vector<int> v_cnt;
	int cnt = 0;

	//╩С ©Л го аб
	move_dir.push_back(make_pair(1, 0));
	move_dir.push_back(make_pair(0, 1));
	move_dir.push_back(make_pair(-1, 0));
	move_dir.push_back(make_pair(0, -1));

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {

			if ((i >= 0 && i < N) && (j >= 0 && j < N)) {
				continue;
			}

			visited[i][j] = true;
		}
	}

	string s = " ";

	for (int k = 0; k < N; k++) {
		cin >> s;

		for (int i = 0; i < N; i++) {

			arr[k][i] = s[i] - '0';

		}

	}

	



	//string s = "0110100";

	//for (int i = 0; i < s.length(); i++) {
	//	arr[0][i] = s[i]-'0';
	//}

	//s = "0110101";
	//for (int i = 0; i < s.length(); i++) {
	//	arr[1][i] = s[i] - '0';
	//}

	//s = "1110101";
	//for (int i = 0; i < s.length(); i++) {
	//	arr[2][i] = s[i] - '0';
	//}

	//s = "0000111";
	//for (int i = 0; i < s.length(); i++) {
	//	arr[3][i] = s[i] - '0';
	//}

	//s = "0100000";
	//for (int i = 0; i < s.length(); i++) {
	//	arr[4][i] = s[i] - '0';
	//}
	//s = "0111110";
	//for (int i = 0; i < s.length(); i++) {
	//	arr[5][i] = s[i] - '0';
	//}
	//s = "0111000";
	//for (int i = 0; i < s.length(); i++) {
	//	arr[6][i] = s[i] - '0';
	//}



	queue<pair<int, int>> dir;

	for (int k = 0; k < N; k++) {
		for (int l = 0; l < N; l++) {

			if (arr[k][l] == 0 || visited[k][l]) {
				continue;
			}

			dir.push(make_pair(k, l));

			visited[k][l] = true;

			int next_y = 0;
			int next_x = 0;


			while (!dir.empty()) {
				int cur_y = dir.front().first;
				int cur_x = dir.front().second;

				dir.pop();
				cnt++;

				for (int i = 0; i < move_dir.size(); i++) {
					next_y = cur_y + move_dir[i].first;
					next_x = cur_x + move_dir[i].second;

					if ((0 <= next_y && next_y < MAX) && (0 <= next_x && next_x < MAX) && !visited[next_y][next_x] &&
						(arr[next_y][next_x] == 1)) {

						dir.push(make_pair(next_y, next_x));
						visited[next_y][next_x] = true;

					}

				}

			}

			v_cnt.push_back(cnt);
			cnt = 0;


		}
	}

	sort(v_cnt.begin(), v_cnt.end());

	
	cout << v_cnt.size() << endl;
	for (int i = 0; i < v_cnt.size(); i++) {
		cout << v_cnt[i] << endl;
	}

}