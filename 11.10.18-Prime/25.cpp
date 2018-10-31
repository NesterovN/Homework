// Нахождение даты палиндрома
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
	
	int a, b, c, d, e, f, g, h;
	a = n.day%10;
	b = n.day/10;
	c = n.month%10;
	d = n.month/10;
	e = n.year%10;
	f = (n.year/10)%10;
	g = (n.year/100)%10;
	h = (n.year/1000)%10;
	
	cout << a << b << c << d << " " << e << f << " " << g <<h;
	
	return 0;
	
