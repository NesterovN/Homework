// Определение дня недели по дате
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
	void ned (int year, int month, int day) {
	
	int a, b, c, s;
	a = year/4;
	b = year/100;
	c = year/400;
	s = a - b + c;
	
	int d;
	if (month < 3)
	d = (month - 1)*31 + day;
	else if (month < 8)
	d = 59 + (month - 3)*31 - (month - 3)/2 + day;
	else 
	d = 212 + (month - 8)*31 - (month - 8)/2 + day;
	
	int sum, res;
	if ((month > 2) || (year > 0))
	sum = year*365 + s + d + 1;
	if ((((year%4 == 0) && !(year%100 == 0)) || (year%400 == 0)) && (month <3))
	sum -= 1;
	if ((year == 0) && (month < 3))
	sum = year*365 + s + d;
	
	res = sum%7;
	cout << s<< endl;
	cout << d<< endl;
	cout << res<< endl;
	
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
}
};

int main () {
	Date n;
	cin >> n.year >> n.month >> n.day;
	n.ned(n.year, n.month, n.day);
	return 0;
}	
