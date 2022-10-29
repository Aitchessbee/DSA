#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {9,8,7,6,5,4,3,2,1};
    int max_row = 0; 
    int max_sum = 0;

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }

        if(sum > max_sum){
            max_row = i;
            max_sum = sum;
        }
    }

    cout << "max row is " << max_row;
}