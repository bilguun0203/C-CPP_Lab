#include <stdio.h>
#include <stdlib.h>

void printm(int a[][100], int n, int m);
void scanm(int a[][100], int n, int m);

int main(){
    int a[100][100], n;
    printf("N: ");
    scanf("%d", &n);
    scanm(a, n, n);
    printf("\n");
    printm(a, n, n);
    for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           if(i==j)a[i][j]=1;
           else if(j+i==n-1)a[i][j]=1;
       }
    }
    printf("\n");
    printm(a,n,n);
    printf("\n");
    system("pause");
    return 0;
}

void scanm(int a[][100], int n, int m){
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           //scanf("%d", a[i][j]);
           a[i][j] = rand()%25;
           if(a[i][j]==1)a[i][j]++;
       }
   }
}

void printm(int a[][100], int n, int m){
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           printf("\t%d", a[i][j]);
       }
       printf("\n");
   }
}
