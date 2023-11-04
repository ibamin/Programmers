#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long string_to_int(string s){
    long long n=0;
    for(int i=0;i<s.size();i++)
        n+=s[i]-'0';
    return n;
}

int solution(string number) {
    int answer = 0;
    long long n = string_to_int(number);
    answer = n%9;
    return answer;
}

int main(){
    cout << solution("78720646226947352489");
}