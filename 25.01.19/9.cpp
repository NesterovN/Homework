//Нахождение количества клеток в которые может попасть конь за один ход
#include <iostream>

using namespace std;

int main()
{
	int a, b, n;
	cin >> n >> a >> b;
	if ((a - 3 > 0) && (b - 1 > 0))
		cout << a - 3 << ' ' << b - 1 << endl;
	if ((a - 3 > 0) && (b + 1 < n + 1))
		cout << a - 3 << ' ' << b + 1 << endl;
	if ((a + 3 < n + 1) && (b - 1 > 0))
		cout << a + 3 << ' ' << b - 1 << endl;
	if ((a + 3 < n + 1) && (b + 1 < n + 1))
		cout << a + 3 << ' ' << b + 1 << endl;
	if ((a - 1 > 0) && (b - 3 > 0))
		cout << a - 1 << ' ' << b - 3 << endl;
	if ((a - 1 > 0) && (b + 3 < n + 1))
		cout << a - 1 << ' ' << b + 3 << endl;
	if ((a + 1 < n + 1) && (b - 3 > 0))
		cout << a + 1 << ' ' << b - 3 << endl;
	if ((a + 1 < n + 1) && (b + 3 < n + 1))
		cout << a + 1 << ' ' << b + 3 << endl;
	return 0;
}