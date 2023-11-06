#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int i=k;
    while(n>=k){
        answer.push_back(k);
        k+=i;
    }
    return answer;
}