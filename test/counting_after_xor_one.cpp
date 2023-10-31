#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    for(int i=0;i<numbers.size();i++){
        long long t=numbers[i]+1;
        while(1){
            bitset<64> bits(numbers[i]^t);
            if(bits.count()<=2){
                answer.push_back(t);
                break;
            }
            t++;
        }
    }
    return answer;
}