#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<pair<string, int>> v_tile;
	string tile[2] = { "00", "1" };

	v_tile.push_back(make_pair("00", 1));
	v_tile.push_back(make_pair("1", 1));

	int depth = 1;

	int index = 0;

	while (true)
	{
		
		for (int i = 0; i < (sizeof(tile) / sizeof(*tile)); i++)
		{
			string tmp_first = v_tile[index].first;
			int tmp_second = v_tile[index].second;

			tmp_first = tmp_first + tile[i];
			tmp_second = tmp_second + 1;

			depth = tmp_second;
			
			v_tile.push_back(make_pair(tmp_first, tmp_second));
			
		}


		index++;

		if (depth > N)
			break;


	}
	int k = 0;
	int count = 0;
	for (auto it = v_tile.begin(); it != v_tile.end(); it++)
	{
		//cout << " ÇöÀç index´Â? ? " << k << endl;
		//cout << it->first << " " << it->second << endl<<endl;
		if (it->first.size() == 4)
			count++;
		k++;
	}

	cout << count%15746 << endl;


}