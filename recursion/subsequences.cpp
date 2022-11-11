#include <iostream>
#include <vector>
using namespace std;

void subsesquence(string str, string output, int index, vector<string> &ans) {
    if (index >= str.size()) {
        ans.push_back(output);
        return;
    }

    // exclude
    subsesquence(str, output, index + 1, ans);

    // include
    output.push_back(str[index]);
    subsesquence(str, output, index + 1, ans);
}

int main() {
    string str = "abc";
    vector<string> ans;
    string output = "";

    int index = 0;

    subsesquence(str, output, index, ans);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}