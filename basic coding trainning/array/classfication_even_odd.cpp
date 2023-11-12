#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    int odd=0,even=0;
    bool tf=true;
    for(int n:num_list){
        if(tf){
            even+=n;
            tf=false;
        }
        else{
            odd+=n;
            tf=true;
        }
    }
    return max(even,odd);
}