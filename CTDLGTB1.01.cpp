#include <iostream>
using namespace std;

int S(int arr[], int n) {
    if (n < 0) { 
        return 0;
    }
    if (arr[n] % 2 == 0) { 
        return arr[n] + S(arr, n - 1);
    }
    else { 
        return S(arr, n - 1);
    }
}

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Tong cac so chan trong mang la : " << S(arr, n - 1);
    return 0;
}