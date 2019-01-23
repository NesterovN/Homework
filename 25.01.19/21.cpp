//Нахождение цифры чаще всего встречающейся в записи чисел
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *M = new int[n];
	for (int i = 0; i < n; i++)
		cin >> M[i];
	int N[10];
	for (int i = 0; i < 10; i++)
		N[i] = 0;
	int a, b = 0;
	for (int i = 0; i < n; i++)
	{
		a = M[i];
		while (a > 0)
		{
			b = a % 10;
			N[b] += 1;
			a /= 10;
		}
	}
	int g = max(max(max(max(N[0], N[1]), max(N[2], N[3])), max(max(N[4], N[5]), max(N[6], N[7]))), max(N[8], N[9]));
	for (int i = 0; i < 10; i++)
	{
		if (N[i] == g)
			cout << N[i] << ' ';
	}
	delete[] M;
	return 0;
}