#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool arr[9];


vector<int> graph[8];

int main() {

	int k[5] = { 10,20,30,40,50 };

	graph[0].push_back(1);
	graph[0].push_back(3);
	graph[0].push_back(6);

	graph[1].push_back(0);
	graph[1].push_back(3);

	graph[2].push_back(3);

	graph[3].push_back(0);
	graph[3].push_back(1);
	graph[3].push_back(2);
	graph[3].push_back(7);

	graph[4].push_back(5);
	
	graph[5].push_back(4);
	graph[5].push_back(6);
	graph[5].push_back(7);

	graph[6].push_back(0);
	graph[6].push_back(5);

	graph[7].push_back(3);
	graph[7].push_back(5);
	
	for (int i = 0; i < size(graph); i++) {

		for (int j = 0; j < size(graph[i]); j++) {
			cout << graph[i][j] << " ";

		}
		cout << endl;
	}

	cout << endl;

	void bfs(int start) {
		queue<int> q;

		q.push(start);
		visited[start] = true;

		cur = 0;

		while (!q.empty()) {

			q.cur

		}


	}


	int N = 4;
	int M = 2;


	

}


