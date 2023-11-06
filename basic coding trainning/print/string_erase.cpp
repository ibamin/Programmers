#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    vector<int> v(my_string.size());
    for(int i:indices)
        v[i]++;
    for(int i=0;i<my_string.size();i++)
        if(v[i]==0)
            answer+=my_string[i];
    return answer;
}

int main(){
    string a="apporoograpemmemprs";
    vector<int> v={1, 16, 6, 15, 0, 10, 11, 3};
    cout << solution(a,v);
}