// Вычисление количества способ получения одного числа из другого
#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> m;
	cin >> n;
	int *M = new int[n - m + 1];
	for (int i = 0; i < n - m + 1; i++)
	{
		M[i] = 0;
	}
	M[0] = 1;
	for (int i = 1; i < n - m + 1; i++)
	{
		if (i + m - 1 >= m)
		{
			if (M[i] > 0)
			{
				M[i] += M[i - 1];
			}
			else
			{
				M[i] = M[i - 1];
			}
		}
		if (((i + m) % 2 == 0) && ((i + m) / 2 >= m))
		{
			if (M[i] > 0)
			{
				M[i] += M[(i + m) / 2 - m];
			}
			else
			{
				M[i] = M[(i + m) / 2 - m];
			}
		}
		if (((i + m) % 3 == 0) && ((i + m) / 3 >= m))
		{
			if (M[i] > 0)
			{
				M[i] += M[(i + m) / 3 - m];
			}
			else
			{
				M[i] = M[(i + m) / 3 - m];
			}
		}
	}
	cout << M[n - m];
	return 0;
}
