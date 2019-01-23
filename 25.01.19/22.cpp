// Нахождение максимальной суммы элементов массива не делящейся на 6
#include <iostream>

using namespace std;

int main()
{
	int a = 0, s = 0, n, c;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		s += a;
		if (a % 6 != 0)
		{
			if (c != 0)
				c = min(a, c);
			else
				c = a;
		}
	}
	if (a % 6 != 0)
		cout << n << ' ' << s;
	else if (c == 0)
	{
		cout << '0';
		return 0;
	}
	if ((s % 6 == 0) && (c != 0))
	{
		s -= c;
		cout << n - 1 << ' ' << s;
		return 0;
	}
	return 0;
}
