#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> my_solution1(vector<int> arr, vector<int> query) {
    vector<int> answer=arr;
    for(int i:query){
        if(i%2==0)
            answer.erase((find(answer.begin(),answer.end(),answer[i])+1));
        else
            answer.erase((find(answer.begin(),answer.end(),answer[i])-1));
    }
    return answer;
}

vector<int> my_solution2(vector<int> arr, vector<int> query) {
    vector<int> answer=arr;
    for(int i:query){
        if(i%2==0){
            for(int t=i+1;t<arr.size();t++)
                answer.erase(answer.begin()+t);
        }
        else{
            for(int t=0;t<i;t++)
                answer.erase(answer.begin()+t);
        }
    }
    return answer;
}

int main(){
    vector<int> v={0, 1, 2, 3, 4, 5};
    vector<int> q={4, 1, 2};
    vector<int> s = solution2(v,q);
    for(auto it=s.begin();it!=s.end();it++)
        cout << *it;
}

vector<int> slice(int s, int e, vector<int>& ans)
{
    vector<int> a(e - s + 1);

    copy(ans.begin() + s, ans.begin() + e + 1, a.begin());
    return a;
}

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer = arr;

    for (int i = 0; i < query.size(); i++)
    {
        if (i % 2 == 0)
        {
            answer = slice(0, query[i], answer);
        }
        else
        {
            answer = slice(query[i], answer.size() - 1, answer);
        }
    }

    return answer;
}
