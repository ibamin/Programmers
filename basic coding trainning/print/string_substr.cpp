#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int i=0;i<my_strings.size();i++){
        string t = my_strings[i];
        vector<int> sub = parts[i];
        for(int i=sub[0];i<=sub[1];i++)
            answer+=t[i];
    }
    return answer;
}

string solution(string my_string, int n) {
    string answer = "";
    for(int i=my_string.size()-n;i<my_string.size();i++)
        answer+=my_string[i];
    return answer;
}

vector<string> solution(string my_string) {
    vector<string> answer;
    while(!my_string.empty()){
        answer.push_back(my_string);
        my_string.erase(0,1);
    }
    sort(answer.begin(),answer.end());
    return answer;
}

int solution(string my_string,string is_suffix){
    int answer=1;
    for(int i=0;i<is_suffix.size();i++){
        if(my_string[my_string.size()-1-i]!=is_suffix[is_suffix.size()-1-i])return 0;
    }
    return answer;
}

int main(){
    vector<string> s ={"progressive", "hamburger", "hammer", "ahocorasick"};
    vector<vector<int>> part ={{0, 4}, {1, 2}, {3, 5}, {7, 7}};
    cout << solution(s,part);
}