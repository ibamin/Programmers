#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> q:queries){
        for(int i=q[0];i<=q[1];i++)
            arr[i]++;
    }
    return arr;
}

int main(){
    vector<int> arr={0,1,2,3,4};
    vector<vector<int>> quries={{0,1},{1,2},{2,3}};
    vector<int> answer = solution(arr,quries);
}