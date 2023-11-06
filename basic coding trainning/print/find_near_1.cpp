#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;
    int len = arr.size();
    for(int i=idx;i<len;i++){
        if(arr[i]==1){
            answer=i;
            break;
        }
    }
    return answer;
}