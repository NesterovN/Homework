/* Хранение графов. Список ребер - reb, матрица смежности - mat, список смежности - sme. Здесь перевод из списка ребер в матрицу смежности,
 из матрицы в списко смежности и из списка смежности в список ребер. Чтобы полчуить из матрицы смежности список ребер нужно перевести в
 список смежности и оттуда в список ребер.*/
#include <iostream>
#include <vector>

using namespace std;

void rebinmat (int n, int **a, int *b, int *c){
int l, i, j, m, v;
while(b[l]){
    l++;
}
for(i = 0; i < l; i++){
    m = b[i];
    v = c[i];
    a[m][v] = 1;
    a[v][m] = 1;
}
}

void matinsme (vector<vector<int> >&vec, int **a, int n){
     vec.resize(n + 1);
for( int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
        if(a[i][j] == 1){
            vec[i].push_back(j);
        }
    }
}

  }
  int& onethree(int** a, int n){
    int l;
    for(int i = 0; i <= n; i++){   //7
    for(int j = 0; j <= n; j++){
    if(a[i][j] == 1){
        l++;
    }
    }
}
l = l/2 + 1;
int **b = new int*[n + 1];
for(int i = 0; i <= n; i++){
    b[i] = new int[l + 1];
    for(int j = 0; j <= n; j++){
        b[i][j] = 0;
    }
}
int k = 1;
for(int i = 0; i <= n; i++){
    for(int j = i + 1; j <= n; j++){
        if(a[i][j] == 1){
            b[i][k] = 1;
            b[j][k] = 1;
            k++;
        }
    }
}
return **b;
}

void smeinreb (int n, int l, vector<vector<int> > &vec, int *b, int *c){
    int **d = new int*[n + 1];
for(int i = 0; i <= n; i++){
    d[i] = new int[l];
    for(int j = 0; j <= n; j++){
        d[i][j] = 0;
    }
}
    for(int i = 0; i <= n; i++){
    for(int j = 0; j < vec[i].size(); j++){
           int f = vec[i][j];
           d[i][f] = 1;
    }
}
int h;
for(int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
        if(d[i][j] == 1){
            b[h] = i;
            c[h] = j;
            h++;
            d[j][i] = 0;
        }
    }
}
}
int main(){
return 0;
}
