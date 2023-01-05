#include <iostream>
using namespace std;
void nhapmang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void SLN(int a[], int& n) {
	int dem = 0;
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max == a[i]) {
			dem++;
		}
		else if (max < a[i]) {
			max = a[i];
			dem = 1;
		}
	} cout << max << endl << dem;
}
int main() {
	int a[100], n;
	cin >> n;
	nhapmang(a, n);
	SLN(a, n);
}