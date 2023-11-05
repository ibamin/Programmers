#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(int i=0;i<intStrs.size();i++){
        string t = intStrs[i];
        t = t.substr(s,l);
        if(stoi(t)>k)
            answer.push_back(stoi(t));
    }
    return answer;
}