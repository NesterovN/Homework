// Определение количества сумм пар делящихся на 9
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *M = new int[n];
	for (int i = 0; i < n; i++)
		cin >> M[i];
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((M[i] + M[j]) % 9 == 0)
				a++;
		}
	}
}
cout << a;
delete[] M;
return 0;
}