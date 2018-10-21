#include <iostream> 
using namespace std;
int gcd ( int a,int b) { 
 int c = 0, d = 0; 
 if (a > b)c = b; 
 else c = a; 
 for (int i = c ; i > 1; i--) { 
  if ((a%i == 0) && (b%i == 0)) { 
   c = i; 
   break; 
  } 
 } 
 return d;
} 
struct rational { 
 int k, m; 
}; 
rational operator~(rational x) { 
 for (int i = 2; i < (x.m); i++) { 
  if ((x.k%i == 0) && (x.m%i == 0)) { 
   x.k = (x.k) / i; 
   x.m = (x.m) / i; 
  } 
  
 } 
 return x; 
} 

rational operator*(rational x, rational y) { 
 x.k = x.k*y.k; 
 x.m = x.m*y.m; 
 return x; 
} 
rational operator/(rational x, rational y) { 
 x.k = x.k*y.m; 
 x.m = x.m*y.k; 
 return x; 
} 
rational operator+(rational x, rational y) { 
 if (x.m == y.m) { 
  x.k = x.k + y.k; 
  x.m = x.m; 
 } 
 
 else { 
  x.k = (x.k*y.m) + (y.k*x.m); 
  x.m = x.m*y.m; 
 } 
 
 return x; 
} 

rational operator-(rational x, rational y) { 
 if (x.m == y.m) { 
  x.k = x.k - y.k; 
  x.m = x.m; 
 } 
 else { 
  x.k = (x.k*y.m) - (y.k*x.m); 
  x.m = x.m*y.m; 
 } 
 return x; 
} 
bool operator==(rational x, rational y) { 
 if (x.m == y.m)return(x.k == y.k); 
 else { 
  x.k = x.k*y.m; 
  x.m = x.m*y.m; 
  y.k = y.k*x.m; 
  y.m = y.m*x.m; 
  return (x.k == y.k); 
 } 
} 
bool operator>(rational x, rational y) { 
 if (x.m == y.m)return(x.k > y.k); 
 else { 
  x.k = x.k*y.m; 
  x.m = x.m*y.m; 
  y.k = y.k*x.m; 
  y.m = y.m*x.m; 
  return (x.k > y.k); 
 } 
} 
bool operator>=(rational x, rational y) { 
 if (x.m == y.m)return(x.k >= y.k); 
 else { 
  x.k = x.k*int(y.m); 
  x.m = x.m*y.m; 
  y.k = y.k*int(x.m); 
  y.m = y.m*x.m; 
  return (x.k >= y.k); 
 } 
 
} 

bool operator<=(rational x, rational y) { 
 if (x.m == y.m)return(x.k <= y.k); 
 else { 
  x.k = x.k*int(y.m); 
  x.m = x.m*y.m; 
  y.k = y.k*int(x.m); 
  y.m = y.m*x.m; 
  return (x.k <= y.k); 
 } 
} 
bool operator<(rational x, rational y) { 
 if (x.m == y.m)return(x.k < y.k); 
 else { 
  x.k = x.k*int(y.m); 
  x.m = x.m*y.m; 
  y.k = y.k*int(x.m); 
  y.m = y.m*x.m; 
  return (x.k < y.k); 
 } 
} 
void print(rational z) { 
 rational x = ~(z); 
 cout << x.k << "/" << x.m; 
} 
void enter(rational x) { 
 cin >> x.k >> x.m; 
} 
int main() 
{ 
 rational l; 
 enter(l); 
 cout << gcd(l.k, l.m) << endl; 
 print(l); 
 return 0; 
}
