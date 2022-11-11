#include <iostream>
using namespace std;

int partition(int *arr, int s, int e) {
    int pivot = arr[s];

    int count = 0;

    for (int i = s + 1; i <= e; i++) {
        if (pivot >= arr[i]) {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }

    int pivotIndex = partition(arr, s, e);

    quickSort(arr, s, pivotIndex - 1);  // sorting left side of pivot

    quickSort(arr, pivotIndex + 1, e);  // sorting right side of pivot
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}