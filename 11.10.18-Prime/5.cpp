//Замена составных чисел на их самые большие простые делители
#include <iostream>
#include<math.h>

using namespace std;

int main () {
	int a;
	cin >> a;
	
	int b = 0;
	for (int i = a/2; i > 1; i--){
		if (a%i == 0){
			for (int j =i/2; j >= sqrt(i); j--){
				if (i%j == 0){
					b = 1;
					break;
				}
			}
			if (b == 0){
				a = i;
				break;
			}
			b = 0;
		}
	}
	cout << a;
	return 0;
}
