#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

bool songuyento(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a[MAX];
	int n, dem = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (songuyento(a[i])) {
			cout << a[i] << " ";
			dem++;
		}
		
	}
	if (dem == 0)
		cout << "0";
	
}