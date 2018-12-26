//

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int k = 0;
char *C = new char[N*M];

int F(int *Arr, int i; int j, int M, int N, int *W, int *C)
{
    
    if(F(A,i-1,j,M,N,W[i-1][j]+A[i][j],C[k]) > F(A,i,j-1,M,N,W[i][j-1]+A[i][j],C[k]) C[k] = 'D';
    
    if(F(A,i-1,j,M,N,W[i-1][j]+A[i][j],C[k]) < F(A,i,j-1,M,N,W[i][j-1]+A[i][j],C[k]) C[k] = 'R';

    k++;
    return max( F(A,i-1,j,M,N,W[i-1][j]+A[i][j],C[k]) , F(A,i,j-1,M,N,W[i][j-1]+A[i][j],C[k] )
}
int main() 
{
   int N;
   int M;
   int **A = new *int[N] //A[N][M]
    for(int i = 0; i < N; i++)
    A[i] = new int[M];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            A[i][j] = rand)() % 100 + 1;
        }
    }
    
    int *C = new int[N*M];
    
    int **W = new *int[N] //W[N][M]
    for(int i = 0; i < N; i++)
    W[i] = new int[M];

    return 0;
}
