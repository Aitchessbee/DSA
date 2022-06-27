//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        for(int k=0; k<i+1; k++){
            cout << k+1;
        }

        for(int l=0; l<i; l++){
            cout << n+i-l-4;
        }

        cout << endl;
    }
}