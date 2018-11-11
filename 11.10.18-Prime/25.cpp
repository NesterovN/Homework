// Вычисление даты палиндрома относительно введеной даты
# include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int main () {
 Date date1, date2; 
 char vv[8]; 
 int i; 
 int zf[8]; 
 
 cout << "Введите день месяц год для Даты:" << endl; 
 cin >> date1.day >> date1.month >> date1.year; 
 
 date2 = nextPalindromDate(date1); 
 
 zf[0] = date2.day / 10; 
 zf[1] = date2.day % 10; 
 zf[2] = date2.month / 10; 
 zf[3] = date2.month % 10; 
 zf[4] = date2.year / 1000; 
 zf[5] = (date2.year / 100) - 10 * zf[4]; 
 zf[6] = date2.year % 100; 
 zf[6] = zf[6] / 10; 
 zf[7] = date2.year % 10; 
 
 for (i = 0; i < 8; i++) {
 	 vv[i] = '0' + zf[i]; 
 } 
 
 cout << endl << "Следующая дата-палиндром: " << vv[0] << vv[1] << "." << vv[2] << vv[3] << "." << vv[4] << vv[5] << vv[6] << vv[7] << endl; 
}
return 0;
}
