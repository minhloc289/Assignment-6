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
		if (i % 2 != 0) {
			cout << a[i] << " ";
		}
	}
}
int main() {
	int a[MAX];
	int n;
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
}