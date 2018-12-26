
#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int l = 0;
void F(int *a, int *b, int a0, int max)
{
    int min = b[0];
    int k = 0, i;
    for (i = 0; i < l; i++)
       if (min > b[i] && b[i] >= a0)
       {
           min = b[i];
           k = i;
       }
    a0 = a[i];
    l++;
    if (a0 == max) cout << l;
    F(a, b, a0, max);
}

int main() 
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "start: "; cin >> a[i];
        cout << "finish: "; cin >> b[i];
    }
    
   int max = a[0];
    for (int i = 1; i < n; i++) 
    if (max < a[i]) 
    max = a[i];
    
    
    return 0;
}
