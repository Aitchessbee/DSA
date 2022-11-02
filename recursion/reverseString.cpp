#include <iostream>
using namespace std;

void reverse(string &word, int i, int j) {
    if (i > j) {
        return;
    }

    swap(word[i], word[j]);
    i++;
    j--;

    reverse(word, i, j);
}

int main() {
    string word;
    cin >> word;
    reverse(word, 0, word.length() - 1);

    cout << word;
}