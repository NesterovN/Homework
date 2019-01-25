// Нахождение максимального четного произведения
#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 1, d = 1, m, n;
	int *y = new int[6];
	cin >> n;
	for (int i = 0; i < 6; i++)
	{
		cin >> y[i];
	}
	for (int i = 6; i < n; i++)
	{
		cin >> m;
		if ((y[i % 6] % 2 != c % 2) && (c % 2 == d % 2))
		{
			d = y[i % 6];
		}
		if ((y[i % 6] % 2 == c % 2) && (y[i % 6] > c))
		{
			c = y[i % 6];
		}
		if ((y[i % 6] % 2 == d % 2) && (y[i % 6] > d))
		{
			d = y[i % 6];
		}

		if ((a < c * m) && ((x % 2 == 0) || (c % 2 == 0)))
		{
			a = c * m;
		}
		if ((b < d * m) && ((m % 2 == 0) || (d % 2 == 0)))
		{
			b = d * m;
		}
		y[i % 6] = m;
	}
	if ((a == 0) && (b == 0))
	{
		cout << "-1";
		return 0;
	}
	else
		cout << max(a, b);
	return 0;
}
