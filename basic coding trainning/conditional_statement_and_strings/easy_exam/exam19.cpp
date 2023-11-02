#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


string solution(string my_string, string letter) {
    string answer = my_string;
    auto it = answer.begin();
    if (it != answer.end()) { 
        it = find(answer.begin(), answer.end(), letter[0]);
        answer.erase(it);
    }
    return answer;
}

int main(){
    string my_string = "BCBdbe";
    string find_String = "B";
    cout << solution(my_string,find_String);
}