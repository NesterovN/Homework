// Поиск кратчайшего пути по автодрому
#include <iostream>
using namespace std;
int main()
{
	int a, b, c = 0, d, sum, n;
	cin >> n;
	cin >> d;
	sum = d;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		c += a;
		if (sum + b > c + d)
		{
			sum = c + d;
		}
		else
		{
			sum += b;
		}
	}
	cout << sum;
	return 0;
}
