// 1
// 23
// 345
// 4567

#include <iostream>
using namespace std;

int main(){
    int n,  count = 1;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << count+j;
        }
        // count = count - i+1;
        count += 1;
        cout << endl;
    }
}