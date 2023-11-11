#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    for (const string& str : str_list) {
        if (str == "l") {
            int idx = &str - &str_list[0];
            answer.assign(str_list.begin(), str_list.begin() + idx);
            break;
        } else if (str == "r") {
            int idx = &str - &str_list[0];
            answer.assign(str_list.begin() + idx + 1, str_list.end());
            break;
        }
    }
    
    return answer;
}
