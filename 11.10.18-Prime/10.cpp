// Удаление четных элементов массива
#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n;
	int *arr = new int [n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int j = 0;
	for (int i = 0; i < n; i++){
		if (arr[i]%2 == 0)
		j++;
	}
	
	int *ar = new int [n - j];
	j = 0;
	for (int i = 0; i < n; i++){
		if (arr[i]%2 == 1){
			ar[j] = arr[i];
			j++;
		}	
	}
	delete [ ] arr;
	
	for (int i = 0; i < j; i++)
	cout << ar[i] << ' ';
	
	delete [ ] ar;
	return 0;
}
