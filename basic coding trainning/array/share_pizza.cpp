#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n<=7) return 1; 
    if(n%7==0) answer = n/7;
    else answer = n/7+1;
    return answer;
}