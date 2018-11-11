// Вычисление биномиального коефицента из n по k
#include <iostream>

using namespace std;

int main () {
	int n, k;
	float res = 1;
	cin >> n;
	cin >> k;
	
	if (k == 1){
		res = n;
		cout << n;
		return 0;
	}
	if (k == 0){
		res = 0;
		cout << res;
		return 0;
	}
	
	int b, c;
	if (k < (n - k)){
	b = k;
	c = n - k;
	}
	else {
	b = n - k;
	c = k;
	}
	
	float a = 0, m = c;
	int i;
	for (i = 1; i <= b; i++){
		if (m < n){
			m++;
			res *= m;
			res /= i;
		}
		else {
			a = 1;
			break;
		}
	}
		if (a == 0){
			m++;
			for (m; m <= n; m++){
			res *= m;
			}
		}
		else {
			for (i; i <= b; i++) {
				res /= i;
			}	
		}
	cout << res;
	return 0;
}
