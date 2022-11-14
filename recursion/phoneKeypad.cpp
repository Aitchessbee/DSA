#include <iostream>
#include <vector>
using namespace std;

void keypad(string digits, vector<string> &ans, string output, string combinations[], int index){
    if(index >= digits.size()) {
        ans.push_back(output);
        return;
    }

    int digit_index = digits[index] - '0';
    
    for(int i=0; i<combinations[digit_index].size(); i++) {
        output.push_back(combinations[digit_index][i]);
        keypad(digits, ans, output, combinations, index+1);
        output.pop_back();
    }


}

int main() {
    string digits = "234";
    vector<string> ans;
    string output;

    string combinations[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;

    keypad(digits, ans, output, combinations, index);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

}