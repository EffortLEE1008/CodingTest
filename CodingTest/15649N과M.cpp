#include <iostream>
#include <vector>

using namespace std;

vector<int> q;
bool visited[9];

void dfs(int depth, int n, int m);

int main()
{
	int N;
	int M;

	cin >> N >> M;

	dfs(0, N, M);

}


void dfs(int depth, int n, int m)
{

	if (depth == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << q[i] << " ";
		}
		cout << endl;


		return;

	}

	for (int i = 1; i <= n; i++)
	{

		if (!visited[i])
		{
			visited[i] = true;
			q.push_back(i);
			dfs(depth+1, n,m);
			q.pop_back();
			visited[i] = false;

		}



	}




}