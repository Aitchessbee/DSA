#include <iostream>
using namespace std;

int main(){
    int n, arr[10000];
    int index = 1, final_arr[10000];
    bool found = false;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        found = false;

        for(int j=0; j<index; j++){
            if(arr[i] == final_arr[j]){
                found = true;
                break;
            }
        }

        if(!found) {
            final_arr[index-1] = arr[i];
            index++;
        }
    }

    for(int i=0; i<index-1; i++){
        cout << final_arr[i] << " ";
    }
}