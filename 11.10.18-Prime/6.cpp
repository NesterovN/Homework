// Элементы последовательности имеющие не менее 5 делителей
#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n;
	int *arr = new int [n];
	
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int b = 0;
	for (int i = 0; i < n; i++){
		for (int j = 2; j <= arr[i]/2; j++){
			if (arr[i]%j == 0)
			b++;
		}
		if (b >= 5)
		cout << arr[i] << " ";
		b = 0;
	}
	
	delete [ ] arr;
	return 0;
}
