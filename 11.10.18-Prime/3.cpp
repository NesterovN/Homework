// Вычисление биномиального коефицента из n по k
#include <iostream>

using namespace std;

int main () {
	int n, k;
	cin >> n;
	cin >> k;
	
	int a = 1, b = 1, c = 1;
	for (int i = 2; i <= n; i++){
		a *= i;
	}
	for (int i = 2; i <= k; i++){
		b *= i;
	}
	for (int i = 2; i <= (n - k); i++){
		c *= i;
	}
	int res = a/b/c;
	cout << res;
	return 0;
}
