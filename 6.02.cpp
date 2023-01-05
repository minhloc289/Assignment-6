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
void NhapmangSNT(int a[], int &n) {
	cin >> n;
	int dem = 0;
	for (int j = 2;dem < n ;j++) {
		if (songuyento(j)) {
			a[dem] = j;
			dem++;
			
		}
	}
}

int SoPhanTuChuaY(int a[], int n, int y ) {
	int dem = 0;
	int b;
	for (int i = 0; i < n; i++) {
		int c = a[i];
		for (;c != 0;){
			b = c % 10;
			if (b == y){
				dem++;
				break;
			} 
			c /= 10;
		}
		
	}
	return dem;
}

 
int main()
{
	int a[MAX], n, y;
	cin >> y;
	NhapmangSNT(a, n);
	cout << SoPhanTuChuaY(a, n, y) << endl;
	return 0;
}
