#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    cout << len1 << " " << len2 << endl;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // printing
    cout << "First ";

    for (int i = 0; i < len1; i++) {
        cout << first[i] << " ";
    }

    cout << endl << "Second ";

    for (int i = 0; i < len2; i++) {
        cout << second[i] << " ";
    }

    cout << endl;

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e) {
    cout << "run" << endl;

    // base case
    if (s >= e) {
        cout << "return" << endl;
        return;
    }

    int mid = (s + e) / 2;

    // left part sort karna h
    cout << "1" << endl;
    mergeSort(arr, s, mid);

    // right part sort karna h
    cout << "2" << endl;
    mergeSort(arr, mid + 1, e);

    // merge
    cout << "3"
         << " start " << s << " end " << e << endl;
    merge(arr, s, e);

    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[8] = {1, 2, 3, 4, 2, 1, 3, 3};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
