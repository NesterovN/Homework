// Нахождение произведения цифр числа, сходных по четности с последней цифрой
#include <iostream>

using namespace std;

int main (){
	int a, b = 1, c ;
	cin >> a;
	c = a;
	for (int i =1; c > 0 ; i++){
		if (c%2 == a%2){
		b *= c%10;
		c = (c - c%10)/10;
		}
		else c = (c - c%10)/10;
	}
	cout << b << endl;
	return 0;
}
