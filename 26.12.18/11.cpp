
#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int *Arr = new int[n];
    int *Brr = new int[n];
    int *Crr = new int[n];
    for(int  i = 0; i < n; i++)
    cin >> Arr[i];
    bool OK; 
    Brr[0] = Arr[0];
    
    for(int i = 0; i < n; i++)
    Crr[i] = 0;
    
    Crr[0]++;
    bool OK2; 
    int k = 0;
    
    for(int i = 1; i < n; i++)
    {
        OK2 = false;
        for(int j = 0; j < i; j++)
        {
            if (Arr[i] == Brr[j])
            {
                Crr[j]++;
                OK2 = true;
            }
            if ((i == j ) && ( OK2 = false))
            {
                k++;
                Brr[k] = Arr[i];
            }
        }
    }
    int j = 0;
    int max = Crr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < Crr[i])
        {
            max = Crr[i];
            j = i;
        }
        
    }
    
    if(max < (n - (n % 2))/2)
    {
        OK = true;
        cout << Arr[j];
    }
    else
    cout << "NO";
    return 0;
}
