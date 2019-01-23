// Нахождение количества элементов значение которых менее чем в 2 раза превосходит значение предыдущего
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *M = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> M[i];
	}
	int m = 0;
	for (int i = 1; i < n; i++)
	{
		if ((M[i] < 2 * M[i - 1]) && (M[i] > M[i - 1]))
			m++;
	}
	cout << m;
	delete[] M;
	return 0;
}