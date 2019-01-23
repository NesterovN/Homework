// Определение количества сумм пар делящихся на 38 элементы которых на растоянии не меньше чем 4
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
		for (int j = i + 4; j < n; j++)
		{
			if ((M[i] * M[j]) % 38 == 0)
				a++;
		}
	}
	cout << a;
	delete[] M;
	return 0;
}