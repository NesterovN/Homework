#include <iostream>

using namespace std;

int main () {
	int n;
    cin >> n;
    int a = n;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
            	n/= i;
           	 a -= a / i;
            }
        }
    }
    if (n > 1) 
    a -= a / n;
    cout << a;
    return 0;
}