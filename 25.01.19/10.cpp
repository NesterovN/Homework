// Нахождение произведения элементов массива кратных 3 и не кратных 2
#include <iostream>

using namespace std;

int main () {
	int n, m = 1;
	cin >> n;
	int *ar = new int [n];
	for (int i = 0; i < n; i++) 
	{
		cin >> ar[i];
	}
	for (int i = 0; i < n; i++) 
	{
		if ((ar[i]%3 == 0) && (ar[i]%2 != 0))
		m *= ar[i];
	}
	cout << m;
	delete [] ar;
	return 0;
}