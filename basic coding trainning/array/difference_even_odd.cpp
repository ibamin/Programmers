#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n%2;
    int sum=0;
    if(answer){
    while(answer<=n){
        sum+=answer;
        answer+=2;
    }
    }
    else{
        while(answer<=n){
            sum+=(answer*answer);
            answer+=2;
        }
    }
    return sum;
}