#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main() {

	int N;

	cin >> N;

	int k =0;
	int answer = 0;
	string tmp = "";
	int int_tmp = k;

	while (k < N)
	{
		tmp = to_string(k);
		for (int i = 0; i < tmp.size(); i++)
		{
			int_tmp = int_tmp + (int(tmp[i]) - '0');
		}

		//cout << int_tmp << endl;

		if (int_tmp == N)
		{
			answer = k;
			break;
		}

		k++;
		int_tmp = k;
	}
	
	//cout << "answer ดย? " << answer << endl;
	cout << answer;

}