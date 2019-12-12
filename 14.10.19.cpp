/*Debroin sequence for k <10 for DNA*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Euler(int **ar, vector <int> &d , int a, int b){
for(int i = 0; i < a; i++){
   if(ar[i][b] == 1){
    ar[i][b] = 0;
    Euler( ar, d, a, i);
   }
}
d.push_back(b);
}
int main()
{
int n, nn, i, j, k, l, c, d, f, o, s, t, u, v, w, r = 0;
int ccc, ddd, eee, fff, mmm, ooo, ppp, sss, ttt, uuu = 0;
int wd, we, wf, wm, wo, wp, ws, wt, wu = 0;
   cout<<endl;
    cin>>l;
    cout<<endl;
    cout<<endl;
    cin>>k;
    cout<<endl;
    if((l == 0)||(k == 0)){
        return 0;
    }
    l = l - 1;
    nn = k;
    for(int i = 1; i < l; i++){
    nn = nn*k;
}
int **a = new int*[nn];
for(i = 0; i < nn; i++){
    a[i] = new int[nn];
    for(j = 0; j < nn; j++){
    a[i][j] = 0;
    }
}
int *m = new int [l];
int **b = new int*[l];
for(int i = 0; i < l; i++){
    b[i] = new int [nn];
}
for(j = 0; j < nn; j++){
    v = j;
    for(s = 0; s < l; s++){
        c = v % k;
        v = v / k;
        m[s] = c;
    }
    for(i = 0; i < l; i++){
            o = l - 1 - i;
    b[o][j] = m[i];
    }
}
for(i = 0; i < nn; i++){
        cout<<b[0][i];
        if(l > 1){
     cout<<b[1][i];
}
if(l > 2)cout<<b[2][i];
if(l > 3)cout<<b[3][i];
if(l > 4)cout<<b[4][i];
if(l > 5)cout<<b[5][i];
if(l > 6)cout<<b[6][i];
if(l > 7)cout<<b[7][i];
if(l > 8)cout<<b[8][i];
if(l > 9)cout<<b[9][i];
cout<<endl;

l = l + 1;
nn = nn*k;
int *p = new int [l];
int **e = new int*[l];
for(int i = 0; i < l; i++){
    e[i] = new int [nn];
}
for(j = 0; j < nn; j++){
    v = j;
    for(s = 0; s < l; s++){
        c = v % k;
        v = v / k;
        p[s] = c;
    }
    for(i = 0; i < l; i++){
            o = l - 1 - i;
    e[o][j] = p[i];
    }
}
for(i = 0; i < nn; i++){
    for(j = 0; j < nn/k; j++){
        w = 1;
        d = 1;
        for(v = 0; v < l - 1; v++){
            if(b[v][j] != e[v][i]){
                w = 0;
            }
            if(b[v][j] != e[v + 1][i]){
                d = 0;
            }
        }
            if(w == 1){
                u = j;
            }
            if(d == 1){
                f = j;
            }
    }
    a[u][f] = 1; r++;
}
nn = nn/k;
int **aa = new int*[nn];
for(i = 0; i < nn; i++){
    aa[i] = new int[nn];
    for(j = 0; j < nn; j++){
    aa[i][j] = a[i][j];
    }
}
vector <int> rr;
Euler(aa, rr, nn, 0);
nn = nn * k;
cout<<endl;
for(i = 0; i < nn; i++){
        cout<<e[0][i];
        if(l > 1){
     cout<<e[1][i];
}
if(l > 2)cout<<e[2][i];
if(l > 3)cout<<e[3][i];
if(l > 4)cout<<e[4][i];
if(l > 5)cout<<e[5][i];
if(l > 6)cout<<e[6][i];
if(l > 7)cout<<e[7][i];
if(l > 8)cout<<e[8][i];
if(l > 9)cout<<e[9][i];
cout<<endl;
}
cout<<endl;
for(i = 0; i < nn/k; i++){
    for(j = 0; j < nn/k; j++){
        cout<<" "<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<" DAMN GRAPTHS! ";
cout<<endl;

cout<<endl;
l = l - 1;
for(i = 0; i < r; i++){
    cout<<rr[i];
    cout<<endl;
    v = rr[i];
    rr[i] = b[l - 1][v];
}
cout<<endl;
cout<<endl;
for(i = 0; i < r; i++){
    cout<<rr[i];
    cout<<endl;
}
return 0;
}
