//Определиние возможности получения одного числа из другого минуя третее число
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
	for (int i = 0; i < n - m + 1; i++)
	{
		if ((i + m - 5 >= m) && (i + m != z))
		{
			if (M[i] > 0)
			{
				M[i] += M[i - 5];
			}
			else
			{
				M[i] = M[i - 5];
			}
		}
		if (((i + m) * (i + m) <= n) && (i + m != z))
		{
			if (M[(i + m) * (i + m) - m] > 0)
			{
				M[(i + m) * (i + m) - m] += M[i];
			}
			else
			{
				M[(i + m) * (i + m) - m] = M[i];
			}
		}
		if (((i + m - 2) / 10 <= n) && (((i + m - 2) % 10) == 0) && (i + m != z))
		{
			if (M[(i + m - 2) / 10 - m] > 0)
			{
				M[i] += M[(i + m - 2) / 10 - m];
			}
			else
			{
				M[i] = M[(i + m - 2) / 10 - m];
			}
		}
		if (((i + m) % 3 == 0) && ((i + m) / 3 >= m) && (i + m != z))
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
	if (M[n - m] == 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}
