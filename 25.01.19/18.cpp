// Нахождение числа конфет которое Снегурочка получала чаще всего
#include <iostream>

using namespace std;

int main()
{
	int n, d, k;
	cin >> n;
	int M[100];
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> d >> k;
		M[k % d]++;
		a = max(a, M[k % d]);
	}
	if (a == 0)
		cout << '0';
	else
		for (int i = 0; i < 100; i++)
		{
			if (M[i] == a)
				cout << i << ' ';
		}
	return 0;
}