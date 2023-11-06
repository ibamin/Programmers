#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    int len = code.size();
    while(len>r){
        answer+=code[r];
        r+=q;
    }
    return answer;
}