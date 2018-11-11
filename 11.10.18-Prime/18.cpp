// Является ли строка палиндромом
#include <iostream>

using namespace std;

bool pal ();

int main () {
	cout << pal ();
	return 0;
}

bool pal () {
	int n;
	cin >> n;
	char *string = new char [n];
	for (int i = 0; i < n; i++){
		cin >> string [i];
	}
	bool r;
	int a = 0;
	for (int i = 0; i <= n/2; i++){
		if (string[i] != string[n - i -1]){
			a++;
			break;
		}
	}
	if (a == 0)
	r = true;
	else r = false;
	return r;
}
