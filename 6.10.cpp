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
void connect(int a[], int b[], int c[], int n1, int n2, int& n3)
{
	int i = 0;
	int j = 0;
	while ((i < n1) && (j < n2))
	{
		if (a[i] < b[j])
		{
			c[n3++] = a[i];
			i++;
		}
		else
		{
			c[n3++] = b[j];
			j++;
		}
	}

	for (; i < n1; i++)
	{
		c[n3++] = a[i];
	}

	for (; j < n2; j++)
	{
		c[n3++] = b[j];
	}
}
int main() {
	int a[100], b[100], c[200];
	int n1, n2;
	int n3 = 0;
	cin >> n1;
	nhapmang(a, n1);
	cin >> n2;
	nhapmang(b, n2);
	connect(a, b, c, n1,n2,n3);
	xuatmang(c, n3);

}
