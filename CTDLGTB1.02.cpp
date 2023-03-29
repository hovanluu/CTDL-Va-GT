#include <iostream>
using namespace std;
int giaithua(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * giaithua(n - 1);
	}
}
double Tich(int x,int n) {
	if (n == 1) {
		return x;
	}
	else {
		return Tich(x, n - 1) + pow(x, n) / giaithua(n);
	}
}
int main() {
	int x;
	int n;
	cout << "Nhap X : ";
	cin >> x; 
	cout << "Nhap N : ";
	cin >> n;
	cout << " Ham de quy tinh tong cua bieu thuc sau : " << Tich(x, n);
	return 0; 
}
