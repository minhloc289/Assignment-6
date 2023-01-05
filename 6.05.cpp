#include <iostream>
using namespace std;
#define MAX 100

void nhapmang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatmang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void themphantu(int a[], int n) {
	int x;
	cin >> x;
	int k;
	cin >> k;
	if (k <= 0) {
		k = 0;
	}
	else if (k >= n) {
		k = n;
	}
	for (int i = n; i > k; i--) {
		a[i] = a[i - 1];
	}
	a[k] = x;
	n++;
	xuatmang(a, n);
}
int main() {
	int a[MAX];
	int n;
	cin >> n;
	nhapmang(a, n);
	themphantu(a, n);
}
