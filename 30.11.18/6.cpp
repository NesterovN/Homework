// Нахождение чисел Чэня
#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    a = 6 * n;
   int * b = new int[n];
   for (int i  = 0; i < a; i++){
    b[i] = 0;
   }
for (int i = 2; i < a; i++){
    if (b[i] == 0){
        for (int j = i * 2; j < a; j += i){
            if (b[j] == 2){
                    b[j] = 3;
                }
                if ((b[j] == 1) && (j % (i*i) == 0)){
                    b[j] = 3;
                }
                if (b[j] == 1){
                    b[j] = 2;
                }
                if ((b[j] == 0) && (j % (i*i*i) == 0)){
                    b[j] = 3;
                }
                 if ((b[j] == 0) && (j % (i*i) == 0)){
                    b[j] = 2;
                }
                if (b[j] == 0){
                    b[j] = 1;
                }
            }
    	}
    }
   for (int i = 0; i < n; i++){
       if (b[i] == 0){
        if ((b[i + 2] == 0) || (b[i + 2] == 2)){
        cout<< i << " ";
        }
       }
   }
   return 0;
}
