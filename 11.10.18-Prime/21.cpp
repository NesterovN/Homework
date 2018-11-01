// Определение дня недели по дате
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
	
	n.year = n.year - 2000;
	
	int a, b, c, s;
	a = n.year/4;
	b = n.year/100;
	c = n.year/400;
	s = a - b + c;
	
	int d;
	if (n.month < 3)
	d = (n.month - 1)*31 + n.day;
	else if (n.month < 8)
	d = 59 + (n.month - 3)*31 - (n.month - 3)/2 + n.day;
	else 
	d = 212 + (n.month - 8)*31 - (n.month - 8)/2 + n.day;
	
	int sum, res;
	if ((n.month > 2) || (n.year > 0))
	sum = n.year*365 + s + d + 1;
	if ((((n.year%4 == 0) && !(n.year%100 == 0)) || (n.year%400 == 0)) && (n.month <3))
	sum -= 1;
	if ((n.year == 0) && (n.month < 3))
	sum = n.year*365 + s + d;
	
	res = sum%7;
	
	switch (res) {
		case 0:
		cout << "Пятница";
		break;
		case 1:
		cout << "Суббота";
		break;
		case 2:
		cout << "Восскресенье";
		break;
		case 3:
		cout << "Понедельник";
		break;
		case 4:
		cout << "Вторник";
		break;
		case 5:
		cout << "Среда";
		break;
		case 6:
		cout << "Четверг";
		break;
		default :
		cout << " Error";
		break;
			}
	return 0;
}	
