//Нахождение самых часто встречающихся по длине чисел
#include <iostream>

using namespace std;

int main()
{
	int n, a = 0, g;
	cin >> n;
	int M[100];
	for (int i = 0; i < 100; i++)
		M[i] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> g;
		while (g > 0)
		{
			a++;
			g /= 10;
		}
		M[a]++;
		a = 0;
	}
	for (int i = 0; i < 100; i++)
		a = max(a, M[i]);
	for (int i = 0; i < 100; i++)
	{
		if (M[i] == a)
			cout << i << ' ' << M[i] << endl;
	}
	return 0;
}