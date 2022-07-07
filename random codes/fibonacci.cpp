// 0,1,1,2,3,5,8,13,21

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    int sum = a+b;

    cout << a << " " << b << " ";

    for(int i=0; i<n-2; i++){
        sum = a+b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}