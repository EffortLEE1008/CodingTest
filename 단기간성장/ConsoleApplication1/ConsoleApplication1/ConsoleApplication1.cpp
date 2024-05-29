

#include <iostream>

using namespace std;


long long d[91];


int main()
{
    d[1] = 1;
    d[2] = 1;

    int N;

    cin >> N;

    for (int i = 3; i <= N; i++) {
        d[i] = d[i - 1] + d[i - 2];
    }

    cout<< d[N];
}





