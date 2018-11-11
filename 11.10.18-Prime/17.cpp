// Заполнение квадратного двумерного массива змейкой
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main () {
	int n;
	cin >> n;
	int **str = new int* [n];
	for (int i = 0; i < n; i++) {
		str[i] = new int [n];
	}
	int m = 1, l;
	for (int j = 0; j < n; j++){
		for (int i = n - 1; i >= 0; i--) {
			str [j] [i] = m;
			m++;
		}
		for (int i = 1; i < n; i++) {
			str [i] [j] = m;
			m++;
			l = n - 1;
		}
		for (int i = 1; i < n; i++) {
			str [l] [i] = m;
			m++;
		}
		for (int i = n - 1; i >= 0; i--) {
			str [i] [l] = m;
			m++;
		}
		n -= 1;	
	}
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			cout << str [j] [i] << ' ';
		}
		cout << endl;
	}
	delete [ ] str ;
	
	return 0;
}
