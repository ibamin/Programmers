#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(int r:numbers)
        if(answer<=n)
            answer+=r;
        else if(answer>n)
            break;
    return answer;
}