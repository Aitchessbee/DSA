// A
// BC
// CDE
// DEFG

#include <iostream>
using namespace std;

int main(){
    int n,  count = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << char(count+j+65);
        }
        count += 1;
        cout << endl;
    }
}