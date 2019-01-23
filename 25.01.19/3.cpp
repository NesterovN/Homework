// Проверка возможности получения одного числа из другого
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
	for (int i = 0; i < n - m + 1; i++)
	{
		if (i + m - 9 >= m)
		{
			if (M[i] > 0)
			{
				M[i] = M[i] + M[i - 9];
			}
			else
			{
				M[i] = M[i - 9];
			}
		}
		if ((i + m) * (i + m) <= n)
		{
			if (M[(i + m) * (i + m) - m] > 0)
			{
				M[(i + m) * (i + m) - m] = M[(i + m) * (i + m) - m] + M[i];
			}
			else
			{
				M[(i + m) * (i + m) - m] = M[i];
			}
		}
		if (((i + m - 1) / 10 >= m) && (((i + m - 1) % 10) == 0))
		{
			if (M[(i + m - 1) / 10 - m] > 0)
			{
				M[i] = M[(i + m - 1) / 10 - m] + M[i];
			}
			else
			{
				M[i] = M[(i + m - 1) / 10 - m];
			}
		}
		if (((i + m) % 7 == 0) && ((i + m) / 7 >= m))
		{
			if (M[i] > 0)
			{
				M[i] = M[i] + M[(i + m) / 7 - m];
			}
			else
			{
				M[i] = M[(i + m) / 7 - m];
			}
		}
	}
	if (M[n - m] == 0)
	{
		cout << "No";
	}
	else
	{
		cout << "Yes";
	}
	return 0;
}
