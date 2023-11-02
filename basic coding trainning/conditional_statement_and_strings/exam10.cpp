#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr = {0, 1, 2, 4, 3};
vector<vector<int>> queries = {{0, 4, 2}, {0, 3, 2}, {0, 2, 2}};

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < queries.size(); i++) {
        vector<int> t = queries[i];
        vector<int> tmp;
        int minValue = -1;
        for (int j = t[0]; j <= t[1]; j++) {
            if (arr[j] > t[2]) {
                tmp.push_back(arr[j]);
                if (minValue == -1 || arr[j] < minValue) {
                    minValue = arr[j];
                }
            }
        }
        if (minValue != -1) {
            answer.push_back(minValue);
        } else {
            answer.push_back(-1);
        }
    }
    return answer;
}
int main(){
    vector<int> answer = solution(arr,queries);
    for(int i=0;i<answer.size();i++){
        cout << answer[i];
    }
}