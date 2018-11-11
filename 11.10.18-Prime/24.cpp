// Вычисление даты через количество дней
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int plu (int year, int month, int day, int m){
	int c;
	c = year/400;
	year = year%400;
	
	int a, b, s;
	a = year/4;
	b = year/100;
	s = a - b + 1;
	
	int d;
	if (month < 3)
	d = (month - 1)*31 + day;
	else if (month < 8)
	d = 59 + (month - 3)*31 - (month - 3)/2 + day;
	else 
	d = 212 + (month - 8)*31 - (month - 8)/2 + day;
	
	int sum;
	sum = year*365 + d + s;
	if ((((year%4 == 0) && !(year%100 == 0)) || (year%400 == 0)) && (month <3))
	sum -= 1;
	
	sum += m;
	
	int x, y, w, z;
	x = sum/(365*400 + 97);
	sum -= x*(365*400 + 97);
	y = sum/(365*100 + 24);
	sum -= y*(365*100 + 24);
	w = sum/(365*4 + 1);
	sum -= w*(365*4 + 1);
	z = sum/365;
	sum -= z*365;
	
	if (z !=0)
	sum -= 1;

	int e, f, t = 0;
	if (z == 0){
	if (sum == 0){
		t += 1;
		e = 12;
		f = 31;
	}
	if (sum > 0){
		e = 01;
		f = sum;
	}
	if (sum > 31){
		e = 02;
		f = sum - 31;
	}
	if (sum > 60){
	e = 03;
	f = sum - 60;
	}
	if (sum > 91){
		e = 04;
		f = sum - 91;
	}
	if (sum > 121){
		e = 05;
		f = sum - 121;
	}
	if (sum > 152){
		e = 06;
		f = sum - 152;
	}
		if (sum > 182){
		e = 07;
		f = sum - 182;
	}
		if (sum > 213){
		e = 8;
		f = sum - 213;
	}
		if (sum > 244){
		e = 9;
		f = sum - 244;
	}
		if (sum > 274){
		e = 10;
		f = sum - 274;
	}
		if (sum > 305){
		e = 11;
		f = sum - 305;
	}
		if (sum > 335){
		e = 12;
		f = sum - 335;
	}
	}
	else {
	if (sum == 0){
		t += 1;
		e = 12;
		f = 31;
	}
	if (sum > 0){
		e = 01;
		f = sum;
	}
	if (sum > 31){
		e = 02;
		f = sum - 31;
	}
	if (sum > 59){
	e = 03;
	f = sum - 59;
	}
	if (sum > 90){
		e = 04;
		f = sum - 90;
	}
	if (sum > 120){
		e = 05;
		f = sum - 120;
	}
	if (sum > 151){
		e = 06;
		f = sum - 151;
	}
		if (sum > 181){
		e = 07;
		f = sum - 181;
	}
		if (sum > 212){
		e = 8;
		f = sum - 212;
	}
		if (sum > 243){
		e = 9;
		f = sum - 243;
	}
		if (sum > 273){
		e = 10;
		f = sum - 273;
	}
		if (sum > 304){
		e = 11;
		f = sum - 304;
	}
		if (sum > 334){
		e = 12;
		f = sum - 334;
	}
	}
	Date l;
	l.year = c*400 + x*400 + y*100 + w*4+ z - t;
	l.month = e;
	l.day = f;
	
	cout << l.year << " " << l.month << " " << l.day;
	return l.day;
}

int main () {
	Date n;
	cin >> n.year;
	cin >> n.month;
	cin >> n.day;
	int m;
	cin >> m;
	
	plu (n.year, n.month, n.day, m);
	return 0;
}
	
