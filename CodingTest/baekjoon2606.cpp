#include <iostream>
#include <vector>

using namespace std;


int arr[101][101];
int visited[101];


int main() 
{

	int n = 7;
	int m=6;


//	cin >> n >> m;

	arr[1][2] = 1;
	arr[2][1] = 1;

	arr[2][3] = 1;
	arr[3][2] = 1;

	arr[1][5] = 1;
	arr[5][1] = 1;

	arr[5][2] = 1;
	arr[2][5] = 1;

	arr[5][6] = 1;
	arr[6][5] = 1;

	arr[4][7] = 1;
	arr[7][4] = 1;


	vector<int> stack;

	int start = 1;

	stack.push_back(start);

	visited[start] = 1;

	int count = 0;

	while (!stack.empty())
	{
		int tmp = stack.back();
		
		stack.pop_back();

		for (int i = 0; i < n; i++)
		{

			if (visited[i] == 0 && arr[tmp][i] == 1)
			{
				stack.push_back(i);

				visited[i] = 1;
				


				count++;

				cout << "Å½»ö À§Ä¡´Â? " << i << endl;
			}

		}


	}
		


	
}