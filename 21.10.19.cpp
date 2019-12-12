// Hamilton graph
#include <iostream>
#include <vector>

using namespace std;

void H(int** b, int n){
vector <int> a;
for(int i = 0; i < n; i++){
    a.push_back(i);
}
int k;
int m;
for(int i = 0; i < n*n; i++){
    if(b[a.at(i)][a.at(i+1)] != 1){
        k = i + 2;
        while((b[a.at(i)][a.at(k)] != 1)&&(b[a.at(i+1)][a.at(k+1)] != 1)){
            k++;
        }
        int j = 0;
        while(2*j < k - 1 - i){
           m = a[i+1+j];
           a[i+1+j] = a[k-j];
           a[k-j] = m;
            j++;
        }
    }
    m = a[i];
    a[i] = -1;
    a.push_back(m);
}
m = 0;
k = 0;
    cout<<endl;
for(int i = 0; i < 2*n*n; i++){
	if((a[i] != -1)&&(k == 0)){
		a[i] = m;
		for(int j = 0; j < n; j++){
			cout<<a[i + j];
    cout<<endl;
		}
		cout<<m;
    cout<<endl;
    k = 1;
	}
   if(k == 1){
   	break;
   }
}
}
int main()
{
int n;
    cin>>n;
    cout<<endl;
    int **a = new int*[n];
for(int i = 0; i < n; i++){
    a[i] = new int[n];
    for(int j = 0; j < n; j++){
            cout<<i<<j;
            cout<<endl;
    cin>>a[i][j];
    cout<<endl;
    }
}
H(a, n);
return 0;
}
