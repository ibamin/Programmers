#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for(int i=0;i<queries.size();i++){
        vector<int> t=queries[i];
        for(int j=t[0];j<=t[1];j++){
            if(j%t[2]==0)
                answer[j]++;
        }
    }
    return answer;
}