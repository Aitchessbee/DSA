#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s = "23";

    string combinations[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    
    for(int i=0; i<s.size(); i++) {
        int index = s[i] - '0';
        for(int j=0; j<combinations[index].size(); j++) {

        }
    }

    // NOT POSSIBLE WITHOUT RECURSION

}