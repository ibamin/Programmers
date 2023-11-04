#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int dices[7]={0,};

int solution(int a, int b, int c, int d) {
    int answer = 0;
    dices[a]++; dices[b]++; dices[c]++; dices[d]++;
    int mx = *max_element(dices,dices+7);
    int mi = 0;
    if(mx==2){
        for(int i=0;i<7;i++){
            if(dices[i]==2) mi++;
        }
    }
    if(mx==4) answer = 1111*a;
    else if(mx==3){
        int p,q;
        for(int i=0;i<7;i++){
            if(dices[i]==3)
                p=i;
            if(dices[i]==1)
                q=i;
        }
        answer=pow((10*p+q),2);
    }else if(mx==2 && mi==2){
        int p=0,q=0;
        for(int i=0;i<7;i++){
            if(dices[i]==2 && p==0)
                p=i;
            else if(dices[i]==2)
                q=i;
        }
        answer=(p+q)*abs(p-q);
    }
    else if(mx==2){
        int p=0,q;
        for(int i=0;i<7;i++){
            if(dices[i]==1 && p==0)
                p=i;
            else if(dices[i]==1)
                q=i;
        }
        answer = p*q;
    }else if(mx==1){
        int m = 7;
        for(int i=0;i<7;i++){
            if(dices[i]){
                m=min(m,i);
                break;
            }
        }
        answer=m;
    }
    return answer;
}

int main(){
    cout << solution(6,4,2,5);
}