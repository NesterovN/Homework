// Удаление минимального и максимального элемента
#include <iostream>

using namespace std;

int main () {
	int n, m, l;
	cin >> n;
	int *arr = new int [n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	m = arr[0];
	l = arr[0];
	for (int i = 0; i < n; i++){
		if (arr[i] < m )
		m = arr[i];
		if (arr[i] >l)
		l = arr[i];
	}
	int j = 0;
	for (int i = 0; i < n; i++){
		if ((arr[i] == m) || (arr[i] == l))
		j++;
	}
	int *ar = new int [n - j];
	j = 0;
	for (int i = 0; i < n; i++){
		if ((arr[i] != m) && (arr[i] != l)){
			ar[j] = arr[i];
			j++;
		}
	}
	delete [ ] arr;
	for (int i = 0; i < j; i++){
		cout << ar[i] << ' ';
	}
	
	delete [ ] ar;
	return 0;
}
