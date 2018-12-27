#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int tr (int n){
int k=0;
while(n>=3){
    if(n%3==2)k++;
    n/=3;
}
if(n==2)k++;
return k;
}

int main()
{
    cout<<tr(200);
int n,k;
cin>>n>>k;
vector <int> ar(n);
for (int i=0;i<n;i++){
    cin>>ar[i];
    if (tr(ar[i])<k)
    cout<<ar[i]<<" ";
}
    return 0;
}