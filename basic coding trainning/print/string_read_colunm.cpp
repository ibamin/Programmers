#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int len = my_string.size();
    while(len>=m){
        answer += my_string[c-1];
        c+=m;
        len-=m;
    }
    return answer;
}