#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i=0;i<str.size()-1;i++)
        cout << str[i] << '\n';
    cout << str[str.size()-1];
    return 0;
}