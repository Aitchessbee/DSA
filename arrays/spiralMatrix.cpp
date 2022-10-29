#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> ans){
    for(int i=0; i<25; i++){
        cout << ans[i] << " ";
    }

    cout << endl;
}



int main(){
    int n=5 , m=5;
    // m -> row , n -> column
    int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    // int loop = 2;
    vector<int> ans;

    for(int loop=0; loop<5/2+1; loop++){
        for(int i=loop; i<m-loop; i++){
            ans.push_back(arr[loop][i]);
        }

        printArr(ans);
        
        for(int i=1+loop; i<n-loop-1; i++){
            ans.push_back(arr[i][m-loop-1]);
        }

        printArr(ans);

        for(int i=m-loop-1; i>=loop; i--){
            ans.push_back(arr[n-loop-1][i]);
        }

        printArr(ans);

        for(int i=n-loop-2; i>loop; i--){
            ans.push_back(arr[i][loop]);
        }

        printArr(ans);
    }

    


}