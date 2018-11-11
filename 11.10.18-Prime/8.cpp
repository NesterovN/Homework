// Приближенное значение квадратного и кубического корня
#include <iostream>

using namespace std;

float two (float n);
float three (float n);

int main (){
	float n;
	cin >> n;
	cout << two (n) << endl;
	cout << three (n) << endl;
	return 0;
}

float two (float n) {
	float a = 0, b = 0, c = 0, d = 0, res = 0;
	float i;
	for (i = 0; i*i < n; i++){
	}
	if (i*i == n)
	a = i;
	else{
		a = i - 1;
		for (i = 0 ; (a + i/10)*(a + i/10) < n; i++){
		}
		b = (i - 1)/10;
		for (i = 0; (a + b + i/100)*(a + b + i/100) < n; i++){
		}
		c = (i - 1)/100;
		for (i = 0; (a + b + c + i/1000)*(a + b + c + i/1000)< n; i++){
		}
		d = (i - 1)/1000;	
	}
	res = a + b + c + d;
	return res;
}

float three (float n) {
	float i;	
	float e = 0, f = 0, g = 0, h = 0, ress = 0;
	for (i = 0; i*i*i < n; i++){
	}
	if (i*i*i == n)
	e = i;
	else{
		e = i - 1;
		for (i = 0 ; (e + i/10)*(e + i/10)*(e + i/10) < n; i++){
		}
		f = (i - 1)/10;
		for ( i = 0; (e + f + i/100)*(e + f + i/100)*(e + f + i/100)< n; i++){
		}
		g = (i - 1)/100;
		for (i = 0; (e + f + g + i/1000)*(e + f + g + i/1000)*(e + f + g + i/1000) < n; i++){
		}
		h = (i - 1)/1000;	
	}
	ress = e + f + g + h;
	return ress;
