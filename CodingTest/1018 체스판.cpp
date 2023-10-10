#include <iostream>
#include <vector>


using namespace std;

const int MAX_NUM = 51;


string arr[MAX_NUM][MAX_NUM];
string tmp_arr[MAX_NUM][MAX_NUM];


int dir_y[4] = { -1, 1, 0, 0 };
int dir_x[4] = { 0, 0, -1, 1 };

int main()
{
	int N = 8;
	int M = 8;
	string a = "WBWBWBWB";
	
	for (int i = 0; i < M; i++)
	{
		arr[0][i] = a[i];
	}

	tmp_arr = arr;

	for (int i = 0; i < M; i++) 
	{
		cout << arr[0][i] << " ";

	}



}

