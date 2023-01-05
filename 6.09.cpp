#include <iostream>

using namespace std;

void nhapmang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}


int main() {
	int a[100];
	int n;
	cin >> n;
	nhapmang(a, n);
	int p, k;
	cin >> p >> k;
	if ((0 <= p && p <= n - 1) && (k <= n - p)) {
		int dem = 0;
		for (int i = p; i < n; i++) {
			for (int j = i; j < n - 1; j++) {
				a[j] = a[j + 1];
				
			}
			i--;
			n--;
			dem++;
			if (dem == k) {
				break;
			}
		}
		
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] <<" ";
	}
}