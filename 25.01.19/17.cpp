// Нахождение максимального подьема в последовательности
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	int c = 0, d = 0, i;
	for (i = 2; b != 0; i++)
	{
		if (a < b)
		{
			c += b - a;
		}
		else
		{
			d = max(c, d);
			c = 0;
		}
		a = b;
		cin >> b;
	}
	cout << i << " numbers have received" << endl;
	cout << "Highest lift height is " << d;
	return 0;
}