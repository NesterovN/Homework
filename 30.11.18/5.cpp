// Выписывание элемнтов массива, произведение цифр которого больше k
// Эффективна потому что мы должны проверить каждый элемент , у которого мы считаем произведение цифр, и быстрее сделать не получится
#include <iostream>

using namespace std;

int main () {
	int n, k;
	cin >> n;
	cin >> k;
	int * ar = new int [n];
	for (int i = 0; i < n; i++)
	cin >> ar[i];
	
	int a, b;
	for (int i = 0; i < n; i++){
		a = ar[i];
		b = 1;
   	 while (a > 0) {
        	if (a % 10 != 0) {
       	  	b *= a%10;
    	 	    a = a/10;
  	 	 }
    		else a = a/10;
        } 
        if (b > k)
     	 cout << ar[i] << ' ';
	}

	return 0;
}