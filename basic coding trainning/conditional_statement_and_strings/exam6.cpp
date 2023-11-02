#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int i=0;i<num_list.size();i++){
        answer.push_back(num_list[i]);
    }
    int n = num_list[num_list.size()-1]-num_list[num_list.size()-2];
    if(n<1) answer.push_back(num_list[num_list.size()-1]*2);
    else answer.push_back(n);
    return answer;
}