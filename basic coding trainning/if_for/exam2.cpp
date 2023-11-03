#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    bool tf;
    for(int i=l;i<=r;i++){
        int t=i;
        while(t){
            if(t%10==5 || t%10==0) tf=true;
            else{
                tf=false;
                break;     
            }
            t/=10;
        }
        if(tf) answer.push_back(i);
        else tf=true;
    }
    if(answer.empty()) answer.push_back(-1);
    return answer;
}