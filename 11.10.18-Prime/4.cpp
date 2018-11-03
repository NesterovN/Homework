// Нахождение простых элементов в массиве
#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int a;
	cin >> a;
	
	int *arr = new int [a];
	
	for (int b = 0; b < a; b++){
	cin >> arr[b];
	}
	
	int n = 0, m = 0;
	for (int i = 0; i < a; i++){
		for (int j = arr[i]/2; j >= sqrt(arr[i]); j--){
			if (arr[i]%j == 0){
				n = 1;
				break;
			}
		}
		if (n == 0)
		m += arr[i];
		n = 0;
	}
	cout << m;
	delete [ ] arr;
	return 0;
}
