#include <iostream>
using namespace std;

bool checkPalindrome(string word, int i, int j) {
    if (i > j) {
        return true;
    }

    cout << word << " " << i << " " << j << endl;

    if (word[i] == word[j]) {
        i++;
        j--;

        return checkPalindrome(word, i, j);
    } else {
        return false;
    }
}

int main() {
    string word;
    cin >> word;

    bool ans = checkPalindrome(word, 0, word.length() - 1);

    if (ans) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
}