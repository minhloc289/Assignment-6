#include <iostream>
using namespace std;
void nhapmang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void xoaso(int a[], int n) {
	int x;
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			for (int j = i; j < n - 1; j++) {
				a[j] = a[j + 1];
			}
			n--;
			i--;
		}
	} 
	xuatmang(a, n);
}
int main() {
	int a[100];
	int n;
	int x;
	cin >> n;
	nhapmang(a, n);
	xoaso(a, n);
}
