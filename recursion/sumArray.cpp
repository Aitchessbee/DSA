#include <iostream>
using namespace std;

int sumArray(int arr[], int size, int &sum) {
    if (size == 0) {
        return 0;
    }

    // int num = 0

    sum += arr[0];

    sumArray(arr + 1, size - 1, sum);

    return sum;
}

int main() {
    int sum = 0;

    int arr[5] = {1, 2, 3, 8, 5};

    cout << sumArray(arr, 5, sum);
}