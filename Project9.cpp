// Ví Dụ tìm kiếm tuyến tính
#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1; 
}

int main() {
    int arr[] = { 3, 7, 2, 1, 9 };
    int size = 5;
    int key = 2;

    int index = linear_search(arr, size, key);

    if (index == -1) {
        cout << "Khong tim thay " << key << " trong mang" << endl;
    }
    else {
        cout << "Tim thay " << key << " tai vi tri " << index << endl;
    }

    return 0;
}