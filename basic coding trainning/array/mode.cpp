#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int a[1001]={0,};

int solution(vector<int> array) {
    int answer = 0;
    for(int i=0;i<array.size();i++)
        a[array[i]]++;
    int m = *max_element(a,a+1000);
    for(int i=0;i<1001;i++){
        if(a[i]==m && answer!=0) return -1;
        if(a[i]==m) answer=i;
    }
    return answer;
}