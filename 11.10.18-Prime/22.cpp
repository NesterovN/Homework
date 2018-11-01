// Определение количества дней до Ноаого Года
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int main () {
	Date n;
	cin >> n.year;
	cin >> n.month;
	cin >> n.day;
	
		int d;
	if (n.month < 3)
	d = (n.month - 1)*31 + n.day;
	else if (n.month < 8)
	d = 59 + (n.month - 3)*31 - (n.month - 3)/2 + n.day;
	else 
	d = 212 + (n.month - 8)*31 - (n.month - 8)/2 + n.day;
	
	int res;
	if ((((n.year%4 == 0) && !(n.year%100 == 0)) || (n.year%400 == 0)) && (n.month < 3))
	res = 366 - d;
	else
	res = 365 - d;
	
	cout << res;
	
	return 0;
}
