#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52,0);
    
    for(char c:my_string){
        if(c>='A' && c<='Z')
            answer[c-'A']++;
        else if(c>='a' && c<='z')
            answer[c-'a'+26]++;
    }
    return answer;
}

int main(){
    string s="Programmers";
    vector<int> v = solution(s);
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
}