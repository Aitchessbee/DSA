// 1234554321
// 1234**4321
// 123****321
// 12******12
// 1********1

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << j+1;
        }

        for(int k=0; k<2*i; k++){
            cout << "*";
        }

        for(int l=0; l<n-i; l++){
            cout << n-l;
        }

        cout << endl;
    }
}