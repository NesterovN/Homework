// Выписывание элеметов массива
// Эффективна потому чтомы должны проверить каждый элемент и делаем это за минимальное количество шагов
#include <iostream>

using namespace std;

int fun (int n, int k, int *ar);

int main () {
	int n, k;
	cin >> n;
	cin >> k;
	int *ar = new int [n];
	for (int i = 0; i < n; i++){
		cin >> ar[i];
	}
	cout << fun (n, k, ar);
	return 0;
}

int fun (int n, int k, int *ar) {
	int f, l;
	for (int i = 0; i < n; i++){
		f = 0;
		l = 1;
		for (int j = 0; ar [i] > 2; j++){
			f += (ar[i] % 3) * l;
			l *= 10;
			ar[i] /= 3;
		}
		ar[i] = f;
	}
	int a = 0, b = 0, c;
	for (int i = 0; i < n; i++){
		c = ar[i];
		for (int j = 0; c > 0; j++){
			if (c % 10 == 2){
				a++;
			}
			c /= 10;
		}
		if (a < k){
			cout << ar[i] << ' ';
		}
		b += a;
		a = 0;
	}
	cout << endl;
	return b;
}

