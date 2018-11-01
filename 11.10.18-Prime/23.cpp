// Определение количества дней между датами
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
	
	Date m;
	cin >> m.year;
	cin >> m.month;
	cin >> m.day;
	
	m.year = m.year - (n.year - (n.year%400));
	n.year = n.year%400;
	
	int an, bn, cn, sn;
	an = n.year/4;
	bn = n.year/100;
	cn = n.year/400;
	sn = an - bn + cn;
	
	int dn;
	if (n.month < 3)
	dn = (n.month - 1)*31 + n.day;
	else if (n.month < 8)
	dn = 59 + (n.month - 3)*31 - (n.month - 3)/2 + n.day;
	else 
	dn = 212 + (n.month - 8)*31 - (n.month - 8)/2 + n.day;
	
	int sumn;
	if ((n.month > 2) || (n.year > 0))
	sumn = n.year*365 + sn + dn + 1;
	if ((((n.year%4 == 0) && !(n.year%100 == 0)) || (n.year%400 == 0)) && (n.month <3))
	sumn -= 1;
	if ((n.year == 0) && (n.month < 3))
	sumn = n.year*365 + sn + dn;
	
		int am, bm, cm, sm;
	am = m.year/4;
	bm = m.year/100;
	cm = m.year/400;
	sm = am - bm + cm;
	
	int dm;
	if (m.month < 3)
	dm = (m.month - 1)*31 + m.day;
	else if (n.month < 8)
	dm = 59 + (m.month - 3)*31 - (m.month - 3)/2 + m.day;
	else 
	dm = 212 + (m.month - 8)*31 - (m.month - 8)/2 + m.day;
	
	int summ;
	if ((m.month > 2) || (m.year > 0))
	summ = m.year*365 + sm + dm + 1;
	if ((((m.year%4 == 0) && !(m.year%100 == 0)) || (m.year%400 == 0)) && (m.month <3))
	summ -= 1;
	if ((m.year == 0) && (m.month < 3))
	summ = m.year*365 + sm + dm;
	
	int r;
	r = summ - sumn;
	cout << r;
	
	return 0;
}
