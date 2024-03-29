#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++) {
        arr1[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for (int j = 0; j < len2; j++) {
        arr2[j] = arr[mainArrayIndex++];
    }

    int i = 0;
    int j = 0;

    mainArrayIndex = s;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            arr[mainArrayIndex++] = arr1[i++];
        } else {
            arr[mainArrayIndex++] = arr2[j++];
        }
    }

    while (i < len1) {
        arr[mainArrayIndex++] = arr1[i++];
    }

    while (j < len2) {
        arr[mainArrayIndex++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
}

void merge_sort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;

    // left
    merge_sort(arr, s, mid);

    // right
    merge_sort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main() {
    // int n;
    // cin >> n;

    // int *arr = new int[n];

    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    int arr[8] = {1, 2, 3, 4, 2, 1, 3, 3};
    int n = 8;

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // delete[] arr;
}