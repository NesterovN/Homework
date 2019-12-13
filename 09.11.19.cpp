// Whitney algorithm
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void incinmat(int n, int k, int**b, int**l){
    int s, u;
    for(int i = 0; i < k; i++){
  for(int j = 0; j < n; j++){
    if((b[j][i] == 1) || (b[j][i] == 2)){
        if(s == 0){
         s = i;
    }
    else{
        u = i;
    }
  }
}
l[s][u] = 1;
l[u][s] = 1;
s = 0;
u = 0;
}
}
void matininc(int** a, int** b, int n, int nn){
int k = 0;
for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(a[i][j] == 1){
            b[i][k] = 1;
            b[j][k] = 1;
            k++;
        }
        if(a[i][j] == 2){
        b[i][k] = 2;
            b[j][k] = 2;
            k++;
        }
    }
}
}
void dfs(int e, int n, int **a, vector <int> &b, bool *used){
used[e] = true;
b.push_back(e);
for(int i = 0; i < n; i++){
    if((a[e][i] == 1) || (a[e][i] == 2)){
        if(! used[i]){
            dfs(i, n, a, b, used);
        }
    }
}
}
int main()
{
    int n, nn, i, j, k, hh, l, m, s, t, u, minn, xx, yy;
    bool tet, tat, tit, tut;
    vector<int> b;
    vector<int> c;
    vector<int> d;
    vector<int> p;
    n = 12;
    minn = n*(n-1);

 vector<int> veca;
 vector<int> vecb;
 vector<int> vecc;
 vector<int> vecd;

bool *used = new bool[n];
int **a = new int*[n];
for(i = 0; i < n; i++){
    a[i] = new int[n];
    for(j = 0; j < n; j++){
        if(! i == j){
    a[i][j] = 1;
        }
        else{
            a[i][j] = 0;
        }
    }
}
a[0][3] = 2;
a[3][0] = 2;
a[1][4] = 2;
a[4][1] = 2;
a[5][2] = 2;
a[2][5] = 2;
a[6][2] = 2;
a[2][6] = 2;
int **aa = new int*[n];
for(i = 0; i < n; i++){
    aa[i] = new int[n];
    for(j = 0; j < n; j++){
    aa[i][j] = 0;
    }
}
 for(int y  = 0; y < n*(n-1); y++){
        nn = 0;
     for(i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
    if((a[i][j] == 1) || (a[i][j] == 2)){
        nn++;
    }
    }
}
nn = nn / 2;
int **aaa = new int*[n];
for(i = 0; i < n; i++){
    aaa[i] = new int[nn];
    for(int j = 0; j < n; j++){
        aaa[i][j] = 0;
    }
}
onethree(a, aaa, n, nn);
tat = true;
tit = true;
tet = true;
tut = true;
xx = -1;
yy = -1;
for(i = 0; i < n; i++){
 if((aaa[i][y] == 1) && (xx == -1)){
    xx = i;
    aaa[i][y] = 0;
 }
 if((aaa[i][y] == 1) && (! xx == -1)){
    yy = i;
    aaa[i][y] = 0;
 }
 if(aaa[i][y] == 2){
    tat = false;
 }
}
if(tat){
a[xx][yy] = 0;
a[yy][xx] = 0;
for(i = 0; i < n; i++){
    m = 0;
    for(j = 0; j < n; j++){
       if(a[i][j] == 1){
        m++;
       }
    }
    if(m < 5){
       tet = false;
    }
}
if(tet){
for(i = 0; i < n; i++){
        for(int q = 0; q < n; q++){
            if(a[i][q] == 1){
                a[i][q] = 0;
                a[q][i] = 0;
                c.push_back(q);
            }
        for(int g = i + 1; g < n; g++){
                 for(int q = 0; q < n; q++){
            if(a[g][q] == 1){
                a[g][q] = 0;
                a[q][g] = 0;
                d.push_back(q);
            }
        k = 0;
for(j = 0; j < n; j++){
    used[j] = false;
}
for(j = 0; j < n; j++){
    if(! used[j]){
        b.clear();
        dfs(j, n, a, b, used);
        k++;
    }
}
if(k == 1){
for(int ii = 0; ii < nn; ii++){
    for(u = 0; u < n; u++){
        if(aaa[u][ii] == 1){
            veca.push_back(u);
            aaa[u][ii] = 0;
        }
    }
    for(int jj = ii + 1; jj < nn; jj++){
    for(int uu = 0; uu < n; uu++){
        if(aaa[uu][jj] == 1){
            vecb.push_back(uu);
            aaa[uu][jj] = 0;
        }
    }
    for(int kk = jj + 1; kk < nn; kk++){
    for(int uuu = 0; uuu < n; uuu++){
        if(aaa[uuu][kk] == 1){
            vecc.push_back(uuu);
            aaa[uuu][kk] = 0;
        }
    }
    threeone(n, nn, aaa, aa);
hh = 0;
for(j = 0; j < n; j++){
    used[j] = false;
}
for(j = 0; j < n; j++){
    if(! used[j]){
        b.clear();
        dfs(j, n, aa, b, used);
        hh++;
    }
}
if(hh == 1){
}
else{
    tit = false;
}
for(int ss = 0; ss < n; ss++){
        for(int uu = 0; uu < n; uu++){
            aa[ss][uu] = 0;
        }
    }
hh = vecc[0];
aaa[hh][kk] = 1;
hh = vecc[1];
aaa[hh][kk] = 1;
vecc.clear();
}
hh = vecb[0];
aaa[hh][jj] = 1;
hh = vecb[1];
aaa[hh][jj] = 1;
vecb.clear();
}
hh = veca[0];
aaa[hh][ii] = 1;
hh = veca[1];
aaa[hh][ii] = 1;
veca.clear();
}
}
else{
    tut = false;
}
s = d.size();
for(int u = 0; u < s; u++){
    t = c[u];
    a[g][t] = 1;
    a[t][g] = 1;
}
d.clear();
        }
}
s = c.size();
for(int u = 0; u < s; u++){
    t = c[u];
    a[i][t] = 1;
    a[t][i] = 1;
}
c.clear();
        }
}

 }
}
if((tet) && (tat) && (tit) && (tut)){
    minn--;
}
 else{
    a[xx][yy] = 1;
    a[yy][xx] = 1;
 }
for(int bb = n - 1; bb >= 0; bb--){
    delete[] aaa[bb];
 }
    delete[] aaa;
 }
    cout<<minn;
return 0;
}
