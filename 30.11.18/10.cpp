// Вычисление праймориала
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
 int n, a = 1; 
 cin >> n; 
 bool* ar = new bool[n+1]; 
 ar [0] = 0; 
 ar [1] = 0;
 for (int i = 2; i <= n+1; i++) 
 ar [i] = 1; 
 for (int i = 2; i <= 2*n+1; i++) 
 if (ar [i]) 
 for (int j = i+i; j <= 2*n+1; j += i) 
 ar [j] = 0; 
 for (int i = 2; i <= n+1; i++) 
 if (ar[i]) 
 a *= i; 
 cout << a; 
 return 0; 
}