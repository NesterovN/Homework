// Выписывание палиндромов
  #include <iostream> 
  #include <string> 
  #include <cmath> 
  
  using namespace std; 
  
  int main() { 
   int n; 
   cin >> n; 
   string st; 
   int a = 1; 
   if (n % 2 == 0) { 
    a = pow(10, n / 2 - 1); 
    st = to_string(a); 
    cout << a; 
    for (int i = st.length()- 1; i >= 0; i--) { 
     cout << st[i]; 
    } 
    cout << endl; 
    while (a < pow(10, n / 2)-1) { 
     a++; 
     st = to_string(a); 
     cout << a; 
     for (int i = st.length() - 1; i >= 0; i--) { 
      cout << st[i]; 
     } 
     cout << endl; 
    } 
   } 
   else { 
    a = pow(10, (n / 2)); 
    st = to_string(a); 
    cout << a; 
    for (int i = st.length()-2; i >= 0; i--) { 
     cout << st[i]; 
    } 
    cout << endl; 
    while (a < pow(10, (n / 2)+1)-1) { 
     a++; 
     st = to_string(a); 
     cout << a; 
     for (int i = st.length()-2; i >= 0; i--) { 
      cout << st[i]; 
     } 
     cout << endl; 
    } 
   } 
   return 0; 
  }