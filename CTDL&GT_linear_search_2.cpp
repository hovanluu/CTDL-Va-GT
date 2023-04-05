#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int x;
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Nhap so can tim";
    cin >> x;
    int ketqua = linearSearch(arr, n, x);
    if (ketqua == -1) {
        cout << "phan tu khong duoc tim thay ";
    }
    else {
        cout << "phan tu duoc tim thay tai vi tri " << ketqua;
    }
    return 0;
}