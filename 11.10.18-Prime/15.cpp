// Заполнение квадратного двумерного массива по диагоналям
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
	for (int j = n; j > 0; j--){
		for (int i = j; i > 0; i--) {
			str [j - i] [i - 1] = j;
			str [n - i] [n + i - j - 1] = j;
		}	
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
