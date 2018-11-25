//Нахождение первых n составных чисел
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;
    vector <int> ar(2*n);
    ar.assign (n*2,1);
    int b = 2;
    ar[0] = 0;
    ar[1] = 3;
    while (a <= n){
    if ((b < 10) || (b%10 == 1) || (b%10 == 3) || (b%10 == 7) || (b%10 == 9)) {
    if (ar[b] == 1) {
            for (int i = b + b; i <= n*2; i+=b){
                ar[i] = 0;
            }
    }
    else
    a++;
    }
    b++;
    }
    a = 1;
    b = 0;
    while (a <= n){
        if (ar [b+1] == 0){
        	cout << b+1 << " ";
        a++;
        }
        b++;
    }
    return 0;
}
