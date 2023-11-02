#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode=1;
    for(int i=0;i<code.size();i++){
        if(mode){
            if(code[i]!='1' && i%2==0)
                answer+=code[i];
            if(code[i]=='1')
                mode=0;
        }else{
            if(code[i]!='1' && i%2==1)
                answer+=code[i];
            if(code[i]=='1')
                mode=1;
        }
    }
    if(answer == "") answer = "EMPTY";
    return answer;
}