// Определение количества дней до Нового Года
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
	int ng (int year, int month, int day) {
	
		int d;
	if (month < 3)
	d = (month - 1)*31 + day;
	else if (month < 8)
	d = 59 + (month - 3)*31 - (month - 3)/2 + day;
	else 
	d = 212 + (month - 8)*31 - (month - 8)/2 + day;
	
	int res;
	if ((((year%4 == 0) && !(year%100 == 0)) || (year%400 == 0)) && (month < 3))
	res = 366 - d;
	else
	res = 365 - d;
	
	return res;
}
};

int main (){
	Date n;
	cin >> n.year;
	cin >> n.month;
	cin >> n.day;
	cout << n.ng (n.year, n.month, n.day);
	return 0;
