#include <iostream>
using namespace std;

int main(){
    int n, arr[100];
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i+=2){
        // int temp = arr[i+1];
        // arr[i+1] = arr[i];
        // arr[i] = temp;
        swap(arr[i], arr[i+1]);
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}