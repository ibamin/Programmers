#include <string>
#include <vector>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcd(int a,int b){
    return a*b/gcd(a,b);
}

int solution(int number, int n, int m) {
    int answer = number%lcd(n,m)==0;
    return answer;
}