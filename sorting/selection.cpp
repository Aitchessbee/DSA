#include <iostream>
using namespace std;

int main(){
    int n, arr[100];
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}