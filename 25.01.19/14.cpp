//Нахождение максимальной суммы пары элементов
#include <iostream>

using namespace std;

int main()
{
	int sum, y, m;
	int *M = new int[5];
	int n;
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		cin >> M[i];
	}
	m = M[0];
	cin >> y;
	sum = m + y;
	M[0] = y;
	for (int i = 6; i < n; i++)
	{
		cin >> y;
		if (M[i % 5] > m)
		{
			m = M[i % 5];
		}
		if (sum < m + y)
		{
			sum = m + y;
		}
		M[i % 5] = y;
	}
	cout << sum;
	delete[] M;
	return 0;
}
