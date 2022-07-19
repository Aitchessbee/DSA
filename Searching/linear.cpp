#include <iostream>
using namespace std;

int main(){
    int key;
    cin >> key;
    
    int arr[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++){
        if(arr[i] == key){
            cout << "Found";
            return 0;
        }
    }
    cout << "Not found";
}