#include <iostream>

using namespace std;

int dp[11];
int pibo(int n);

int main(){

    //dp[1]=1;
    //dp[2]=2;
    //dp[3]=4;

    //int T=1;
    int T = 0;
    int n = 0;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> n;
        cout << (pibo(n)) << endl;
    }
    


    return 0;
}

int pibo(int n){
    if(n==1){
        return 1;
    }

    if(n==2){
        return 2;
    }

    if(n==3){
        return 4;
    }

    return pibo(n-1) + pibo(n-2) + pibo(n-3);

}