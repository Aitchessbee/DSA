// 1
// 21
// 321
// 4321

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // cout << 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << i-j+1;
        }
        cout << endl;
    }
}