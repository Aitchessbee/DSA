#include <iostream>
using namespace std;

int main(){
    int k, n;
    int arr[1000];

    cin >> n;
    cin >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    cout << mid << endl;

    if(k >= arr[0]){
        s = 0;
        e = mid;
    }else {
        s = mid;
        e = n-1;
    }

    mid = s + (e-s)/2;
    // cout << "123";
    while(s<=e){
        // cout << mid;
        if(arr[mid] > k){
            e = mid-1;
        }else if(arr[mid] < k) {
            s = mid+1;
        }else {
            cout << mid << "ans";
            break;
        }
        mid = s + (e-s)/2;
    }
    cout << endl << "Program ended";
}