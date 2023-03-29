#include<iostream>
using namespace std;
int cacsoduong(float arr[], int n) {
	if (n == 0) {
		return 0;
	}
	int count = cacsoduong(arr, n - 1); 
	if (arr[n - 1] > 0) {
		count++;
	}
	return count;
}
int main() {
	int n;
	float arr[100];
	cout << "so gia tri trong mang la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "phan tu thu  " << i + 1 << ": ";
		cin >> arr[i];
	}
	int soluongduong = cacsoduong(arr, n);
	cout << "So luong gia tri duong : " << soluongduong;
	return 0;
};