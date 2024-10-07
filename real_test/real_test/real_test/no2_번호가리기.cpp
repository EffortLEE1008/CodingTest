#include <iostream>
#include <string>

using namespace std;

string Solution(string phone_number);

int main()
{
    string number = "01033334444"; // testcase 1
    //string number = "027778888"; // testcase 2 
    //string number = "9944";      // testcase 3
    
    cout << Solution(number) << endl;
    
}

string Solution(string phone_number) {

    string answer = "";

    int s_num = phone_number.length() - 4; // 전화번호의 길이에서 -4만큼 빼주기.

    for (int i = 0; i < s_num; i++) //전화번호 길이에서 -4 만큼 "*" 더해주기
    { 
        answer = answer + "*";
    }

    for (int i = s_num; i < phone_number.length(); i++) // 뒤에서 숫자 4개만 표시해주기
    { 
        answer = answer + phone_number[i];
    }

    return answer;  

}