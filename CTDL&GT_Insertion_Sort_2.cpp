﻿// Ví Dụ 
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void xuatmang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 9, 5, 2, 7, 1, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    xuatmang(arr, n);
    return 0;
}