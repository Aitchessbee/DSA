#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "{()()()}[{{}()}]";
    stack<char> list;

    for(int i=0; i<str.size(); i++){
        if(str[i] == '{' || str[i] == '(' || str[i] == '['){
            list.push(str[i]);
        } else {
            if (!list.empty()) {
                if (str[i] == '}' && list.top() == '{') {
                    list.pop();
                } else if (str[i] == ']' && list.top() == '[') {
                    list.pop();
                } else if (str[i] == ')' && list.top() == '(') {
                    list.pop();
                }
            }else {
                list.push('[');
                break;
            }
        }
    }

    if(list.empty()){
        cout << "True";
    }else {
        cout << "False";
    }
}