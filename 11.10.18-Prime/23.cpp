// Определение количества дней между датами
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int min(int nyear, int nmonth, int nday, int myear, int mmonth, int mday) {
	myear = myear - (nyear - (nyear%400));
	nyear = nyear%400;
	
	int an, bn, cn, sn;
	an = nyear/4;
	bn = nyear/100;
	cn = nyear/400;
	sn = an - bn + cn;
	
	int dn;
	if (nmonth < 3)
	dn = (nmonth - 1)*31 + nday;
	else if (nmonth < 8)
	dn = 59 + (nmonth - 3)*31 - (nmonth - 3)/2 + nday;
	else 
	dn = 212 + (nmonth - 8)*31 - (nmonth - 8)/2 + nday;
	
	int sumn;
	if ((nmonth > 2) || (nyear > 0))
	sumn = nyear*365 + sn + dn + 1;
	if ((((nyear%4 == 0) && !(nyear%100 == 0)) || (nyear%400 == 0)) && (nmonth <3))
	sumn -= 1;
	if ((nyear == 0) && (nmonth < 3))
	sumn = nyear*365 + sn + dn;
	
	int am, bm, cm, sm;
	am = myear/4;
	bm = myear/100;
	cm = myear/400;
	sm = am - bm + cm;
	
	int dm;
	if (mmonth < 3)
	dm = (mmonth - 1)*31 + mday;
	else if (nmonth < 8)
	dm = 59 + (mmonth - 3)*31 - (mmonth - 3)/2 + mday;
	else 
	dm = 212 + (mmonth - 8)*31 - (mmonth - 8)/2 + mday;
	
	int summ;
	if ((mmonth > 2) || (myear > 0))
	summ = myear*365 + sm + dm + 1;
	if ((((myear%4 == 0) && !(myear%100 == 0)) || (myear%400 == 0)) && (mmonth <3))
	summ -= 1;
	if ((myear == 0) && (mmonth < 3))
	summ = myear*365 + sm + dm;
	
	int r;
	r = summ - sumn;
	return r;
 }
	
int main () {
	Date n;
	cin >> n.year;
	cin >> n.month;
	cin >> n.day;
	
	Date m;
	cin >> m.year;
	cin >> m.month;
	cin >> m.day;
	
	cout << min (n.year, n.month, n.day, m.year, m.month, m.day);
return 0;
}

