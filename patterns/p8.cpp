// ABC
// DEF
// GHI

#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int n;
    cin >> n;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << char(count+65);
            count++;
        }
        cout << endl;
    }
}