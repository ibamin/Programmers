#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = n*12000;
    k = k-(n/10);
    if(k>0) answer+=k*2000;
    return answer;
}