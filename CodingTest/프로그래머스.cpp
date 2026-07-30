#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int find_union(int parent[], int n) {

	if (parent[n] == n)
	{
		return parent[n];
	}

	parent[n] = find_union(parent, parent[n]);
	return parent[n];

}

void make_union(int parent[], int n, int m) {

	int a = find_union(parent, n);
	int b = find_union(parent, m);

	if (a > b)
	{
		parent[b] = a;
	}
	else if (b > a)
	{
		parent[a] = b;
	}

}

int arr[1001];


int main()
{
	int N = 6;
	int M = 9;
	for (int i = 1; i <= N; i++)
	{
		arr[i] = i;
	}

	vector < pair<int, pair<int, int>>> link;

	link.push_back({ 5,{1,2} });
	link.push_back({ 4,{1,3} });
	link.push_back({ 2,{2,3} });
	link.push_back({ 11,{3,5} });
	link.push_back({ 3,{4,5} });

	sort(link.begin(), link.end());

	cout << link[0].first << endl;


}