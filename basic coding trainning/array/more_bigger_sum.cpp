#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string tmp = to_string(a)+to_string(b);
    string tmp2 = to_string(b)+to_string(a);
    int t = stoi(tmp);
    int t2 = stoi(tmp2);
    if(t>t2) answer =t;
    else answer=t2;
    return answer;
}