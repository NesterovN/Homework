// Вычисление количества способов получения одного числа из другого минуя третьего числа
#include <iostream>

using namespace std;

int main()
{
	int n, m, z;
	cin >> m;
	cin >> n;
	cin >> z;
	int *M = new int[n - m + 1];
	for (int i = 0; i < n - m + 1; i++)
	{
		M[i] = 0;
	}
	M[0] = 1;
	for (int i = 1; i < n - m + 1; i++)
	{
		if ((i + m - 1 >= m) && (i + m != z))
		{
			if (M[i] > 0)
			{
				M[i] = M[i] + M[i - 1];
			}
			else
			{
				M[i] = M[i - 1];
			}
		}
		if (((i + m) % 2 == 0) && ((i + m) / 2 >= m) && ((i + m) / 2 != z))
		{
			if (M[i] > 0)
			{
				M[i] = M[i] + M[(i + m) / 2 - m];
			}
			else
			{
				M[i] = M[(i + m) / 2 - m];
			}
		}
		if (((i + m - 1) % 2 == 0) && ((i + m - 1) / 2 >= m) && ((i + m - 1) / 2 != z))
		{
			if (M[i] > 0)
			{
				M[i] = M[i] + M[(i + m - 1) / 2 - m];
			}
			else
			{
				M[i] = M[(i + m - 1) / 2];
			}
		}
		if (((i + m) % 10 == 0) && ((i + m) / 10 >= m) && ((i + m) / 10 != z))
		{
			if (M[i] > 0)
			{
				M[i] = M[i] + M[(i + m) / 10 - m];
			}
			else
			{
				M[i] = M[(i + m) / 10 - m];
			}
		}
	}
	cout << M[n - m];
	return 0;
}
