#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    size_t found;
    while ((found = my_string.find(letter)) != string::npos) {
        my_string.erase(found, letter.size());
    }
    return my_string;
}
