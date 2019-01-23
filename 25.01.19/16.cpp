//Нахождение максимального произведения пары элементов
#include <iostream>

using namespace std;

int main()
{
	int sum, y, m;
	int *M = new int[6];
	int n;
	cin >> n;
	for (int i = 0; i < 6; i++)
	{
		cin >> M[i];
	}
	m = M[0];
	cin >> y;
	sum = m * y;
	M[0] = y;
	for (int i = 7; i < n; i++)
	{
		cin >> y;
		if (M[i % 6] > m)
		{
			m = M[i % 6];
		}
		if (sum < m * y)
		{
			sum = m * y;
		}
		M[i % 6] = y;
	}
	cout << sum;
	delete[ ] M;
	return 0;
}
