#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "hello world";
    string ans = "";

    stack<char> str_stack;

    for(int i=0; i<str.length(); i++) {
        str_stack.push(str[i]);
    }

    for(int i=0; i<str.size(); i++) {
        ans.push_back(str_stack.top());
        str_stack.pop();
    }

    cout << ans;
}