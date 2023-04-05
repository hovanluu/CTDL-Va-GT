// tìm kiếm tuyến tính
//https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search#:~:text=C%C3%A0i%20%C4%91%E1%BA%B7t%20thu%E1%BA%ADt%20to%C3%A1n%20t%C3%ACm%20ki%E1%BA%BFm%20tuy%E1%BA%BFn%20t%C3%ADnh,else%20%7B%20return%20i%3B%2F%2FT%C3%ACm%20th%E1%BA%A5y%20x%20%7D%20%7D
int LinearSearch(int a[], int n, int x)
{
	int i = 0;
	while ((i < n) && (a[i] != x)) {
		i++;
	}
	if (i == n) {
		return -1;//Tìm không thấy x
	}
	else {
		return i;//Tìm thấy x
	}
}