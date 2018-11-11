// Сжатие символьного массива
#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n; 
	
	char *arr = new char [n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	char t = arr[0];
	int l = 0;
	for ( int i = 1; i < n; i++){
		if (arr[i] != t){
			l += 2;
			t = arr[i];
		}
	}
	l += 2;
	cout<<l<<endl;
	char *ar = new char [l];
	int j = 1;
	t = arr[0];
	int m = l;
	l = 0;
	for (int i = 1; i < (n +1); i++){
		if (t == arr[i])
		j++;
		else{
			switch (j){
				case 1: 
				ar[l] = '1';
				break;
				case 2: 
				ar[l] = '2';
				break;
				case 3: 
				ar[l] = '3';
				break;
				case 4: 
				ar[l] = '4';
				break;
				case 5: 
				ar[l] = '5';
				break;
				case 6: 
				ar[l] = '6';
				break;
				case 7: 
				ar[l] = '7';
				break;
				case 8: 
				ar[l] = '8';
				break;
				case 9: 
				ar[l] = '9';
				break;
			}
			l++;
			ar[l] = t;
			l++;
			t = arr[i];
			j = 1;
		}
	}
	cout << l<< endl;
	
	for (int i = 0; i < m; i++){
		cout << ar[i] ;
	}
	delete [ ] arr;
	delete [ ] ar;
	return 0;
}
