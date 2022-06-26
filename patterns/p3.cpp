// 1
// 23
// 456
// 78910

#include <iostream>
using namespace std;

int main(){
    int n,  count = 1;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << count;
            count += 1;
        }
        cout << endl;
    }
}