// 1
// 22
// 333
// 4444

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=1; j<i+2; j++){
            cout << j;
        }
        cout << endl;
    }
}