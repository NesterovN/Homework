#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> ar(n);
    vector <int> arr(n*n);
     ar.assign(n,1);
     arr.assign(n*n,0);
     ar[0]=0;
     ar[1]=0;
  for(int i=2;i<n;i++){
    if(ar[i]==1){
        for(int j=i*2;j<n;j+=i){
            ar[j]=0;
        }
    }
  }
  for(int i=2;i<n;i++){
    for(int j=2;j<n;j++){
     if(ar[i]==1 && ar[j]==1)arr[i*j]=1;
    }
  }
  for(int i=2;i<n;i++){
    if(ar[i]==1 && (ar[i+2]==1 || arr[i+2]==1)) cout<<i<<" ";
  }
    return 0;
}