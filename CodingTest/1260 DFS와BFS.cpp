#include <iostream>
#include <vector>
#include <queue>
#include <string>


int arr[1001][1001];
bool visited[1001];

int N, M;

using namespace std;

void bfs(int n, int m, int start);
void dfs(int start);
void reset();

int main()
{
	
	int start = 0;
	
	int k, j = 0;

	cin >> N >> M >> start;

	for (int i = 0; i < M; i++) {

		cin >> k >> j;

		arr[k][j] = 1;
		arr[j][k] = 1;

	}



	dfs(start);
	reset();
	cout << endl;
	bfs(N, M, start);
}

void bfs(int n, int m, int start)
{
	string s = "";
	queue<int> q;

	int n_start = 0;

	q.push(start);
	visited[start] = true;
	s = s + to_string(start);

	while (!q.empty()) 
	{
		int current = q.front();

		if (n_start == 1) {
			s = s + " " + to_string(current);
		}
		n_start = 1;
		
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (arr[current][i] == 1 && visited[i]==false)
			{
				q.push(i);
				visited[i] = true;

			}

		}

	}
	cout<< s;

}

void dfs(int v) 
{
	visited[v] = true;
	cout << v << " ";

	for (int i = 1; i <= N; i++) {
		if (arr[v][i] == 1 && visited[i] == false) {
			dfs(i);
		}
	}




}

void reset() {
	for (int i = 1; i <= N; i++) {
		visited[i] = false;
	}
}