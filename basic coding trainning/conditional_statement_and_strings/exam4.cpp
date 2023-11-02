#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum=0,mul=1;
    for(int i=0;i<num_list.size();i++){
        sum+=num_list[i];
        mul*=num_list[i];
    }
    answer = pow(sum,2)>mul;
    return answer;
}