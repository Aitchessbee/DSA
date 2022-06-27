// AAA
// BBB
// CCC

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=65; i<65+n; i++){
        for(int j=0; j<n; j++){
            cout << char(i);
        }
        cout << endl;
    }
}