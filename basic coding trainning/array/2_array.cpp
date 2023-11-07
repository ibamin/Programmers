#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> mysolution(vector<int> arr) {
    vector<int> answer;
    auto f = find(arr.begin(), arr.end(), 2);
    auto s = find(f+1,arr.end(),2);
    
    if(f==arr.end() && s==arr.end()){
        answer.push_back(-1);
        return answer;
    }
    
    if(f!=arr.end() && s==arr.end()){
        answer.push_back(*f);
        return answer;
    }
    
    while(1){
        if(s==arr.end())
            break;
        for(auto i=f;i<=s;i++)
            answer.push_back(*i);
        f=s+1;
        s=find(f+1,arr.end(),2);
    }
    return answer;
}

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int first=-1;
    int last =-1;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==2){
            if(first==-1)
                first=i;
            last=i;
        }
    }
    
    if(first==-1) return {-1};
    answer = vector<int>(arr.begin()+first,arr.begin()+last+1);
    return answer;
}