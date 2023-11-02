#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer=arr;
    for(int i=0;i<queries.size();i++){
        vector<int> swap_data = queries[i];
        int t = answer[swap_data[0]];
        answer[swap_data[0]] = answer[swap_data[1]];
        answer[swap_data[1]]=t;
    }
    return answer;
}