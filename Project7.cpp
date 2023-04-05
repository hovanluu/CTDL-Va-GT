// Ví dụ tìm kiếm nhị phân
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "Khong tim thay phan tu " << x << endl;
    else
        cout << "Tim thay phan tu " << x << " tai vi tri " << result << endl;

    return 0;
}
