#include <iostream>
using namespace std;
#define MAX 100
void nhapmang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void Second(int a[], int n) {
	int max2 = -2;
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max2 = max;
			max = a[i];
		}
		else if (a[i] > max2 && a[i] < max) {
			max2 = a[i];
		}
	}
	if (max2 == -2)
		cout << "0";
	else cout << max2;
}
int main() {
	int a[MAX];
	int n;
	cin >> n;
	nhapmang(a, n);
	Second(a, n);
}