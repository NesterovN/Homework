// Заполнение квадратного лвумерного массива по диагоналям
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
	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			str [i] [j] = j + 1;
			str [j] [i] = j + 1;
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
