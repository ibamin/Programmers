#include <string>
#include <vector>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int LCD(int a,int b){
    return a * b / gcd(a, b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int t = LCD(denom1,denom2);
    int n1 = t/denom1 , n2 = t/denom2;
    numer1 *= n1; numer2 *= n2;
    int result = numer1+numer2;
    int g = gcd(result,t);
    answer.push_back(result/g);
    answer.push_back(t/g);
    return answer;
}