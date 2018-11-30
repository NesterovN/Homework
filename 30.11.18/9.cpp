// Вычисление простых чисел Софи Жермен
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
 int n; 
 cin >> n; 
 bool* ar = new bool [2*n+2]; 
 ar [0] = 0; 
 ar [1] = 0;
 for (int i = 2; i <= 2*n+2; i++) 
 ar [i] = 1; 
 for (int i = 2; i <= 2*n+2; i++) 
 if (ar [i]) 
 for (int j = i+i; j <= 2*n+2; j += i) 
 ar [j] = 0; 
 for (int i = 2; i <= n; i++) 
 if ((ar [i]) && (ar [2*i+1])) 
 cout << i << endl; 
 return 0; 
} 