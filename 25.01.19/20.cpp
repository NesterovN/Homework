// Нахождение максимальной суммы элементов пар не делящейся на 3
#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, n;
	cin >> n;
	int *ar = new int[n];
	int *arr = new int[n];
	int j = 0;
	while (b % 3 == 0)
	{
		b = max(ar[j], arr[j]) - min(ar[j], arr[j]);
		j++;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i] >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		a += max(ar[i], arr[i]);
		if (((max(ar[i], arr[i]) - min(ar[i], arr[i])) < b) && (((max(ar[i], arr[i]) - min(ar[i], arr[i])) % 3 != 0)))
			b = max(ar[i], arr[i]) - min(ar[i], arr[i]);
	}
	if (a % 3 == 0)
		a -= b;
	if (a % 3 == 0)
		cout << '0';
	else
		cout << a;
	delete[] ar;
	delete[] arr;
	return 0;
}