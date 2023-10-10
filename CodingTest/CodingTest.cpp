// CodingTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int arr[4][6];
int visited[4][6];
int dist[4][6];

// arr[y][x] (y= -1, x=0 은 상), (y= 1, x=0 은 하), (y= 0, x=-1 은 좌), (y= 0, x=1 은 우) 

int y_dir[4] = { -1, 1 ,0, 0 };
int x_dir[4] = { 0, 0, -1 ,1 };



queue<pair<int, int>> q;

int main()
{
    
   
    int N = 4;
    int M = 6;

    string tmp = "";
    char c_tmp = 'a';

    for (int i = 0; i < N; i++)
    {
        switch (i){

        case 0:
            tmp = "101111";
            break;

        case 1:
            tmp = "101010";
            break;

        case 2:
            tmp = "101011";
            break;

        case 3:
            tmp = "111011";
            break;
        }

        for (int j = 0; j < M; j++) 
        {

            arr[i][j] = tmp[j] - '0';

            cout << arr[i][j] << " ";

        }
        cout << endl;

        
    }

    int start_y = 0;
    int start_x = 0;
    

    visited[start_y][start_x] = 1;

    q.push(make_pair(start_y, start_x));

    dist[start_y][start_x]++;


    while (!q.empty()) 
    {
        int y = q.front().first;
        int x = q.front().second;

        q.pop();

        for (int i = 0; i < 4 ; i++)
        {
            int next_y = y + y_dir[i];
            int next_x = x + x_dir[i];

            if ((0 <= next_y && next_y < N) && (0 <= next_x && next_x < M) && visited[next_y][next_x] == 0 && arr[next_y][next_x] == 1)
            {

                visited[next_y][next_x] = 1;

                q.push(make_pair(next_y, next_x));

                dist[next_y][next_x] = dist[y][x] + 1;

            }


        }
        


    }
    cout << endl << endl;
    for (int i = 0; i < N; i++)
    {


        for (int j = 0; j < M; j++)
        {


            

            

            cout << dist[i][j] << " ";

        }
        cout << endl;


    }
    


   

    

}



