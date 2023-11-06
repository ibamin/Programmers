#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string t = my_string.substr(0,is_prefix.size());

    if (t==is_prefix)
        answer = 1;
    
    return answer;
}
