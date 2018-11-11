// Разжатие символьного массива
#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n; 
	
	char *arr = new char [n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int l, m = 0;
	for (int i = 0; i < n; i++){
				switch (arr[i]){
				case '1': 
				 l = 1;
				break;
				case '2': 
				l = 2;
				break;
				case '3': 
				l = 3;
				break;
				case '4': 
				l = 4;
				break;
				case '5': 
				l = 5;
				break;
				case '6': 
				l = 6;
				break;
				case '7': 
				l = 7;
				break;
				case '8': 
				l = 8;
				break;
				case '9': 
				l = 9;
				break;
				default :
				break;
		}
		m += l;
		l = 0;
	}
	char *ar = new char [m];
	int j = 0;
	l = 0;
	for (int i = 0; i < n; i++) {
		switch (arr[i]){
				case '1': 
				 l += 1;
				break;
				case '2': 
				l += 2;
				break;
				case '3': 
				l += 3;
				break;
				case '4': 
				l += 4;
				break;
				case '5': 
				l += 5;
				break;
				case '6': 
				l += 6;
				break;
				case '7': 
				l += 7;
				break;
				case '8': 
				l += 8;
				break;
				case '9': 
				l += 9;
				break;
		}
		i++;
		for (j; j < l; j++){
			ar[j] = arr[i];
		}
	}
	
	for (int i = 0; i < m; i++){
		cout << ar[i] ;
	}
	delete [ ] arr;
	delete [ ] ar;
	return 0;
}
