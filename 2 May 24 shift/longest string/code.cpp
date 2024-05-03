#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string getLongestString(string s) {
    stringstream ss(s);
    string word, ans = "";
    int maxi = 0;
    while (ss >> word) {
        if (word.length() > maxi) {
            ans = word;
            maxi = word.length();
        }
    }
    return ans;
}

int main() {
    string s;
    getline(cin, s);
    cout << "The longest string is: " << getLongestString(s) << endl;
    return 0;
}
