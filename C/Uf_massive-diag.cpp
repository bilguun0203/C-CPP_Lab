#include <stdio.h>
#include <stdlib.h>

int gol_diag(int a[][99], int n);
int hajuu_diag(int a[][99], int n);
int printm(int a[][99], int n, int m);

int main(){
    int a[99][99], n;
    printf("n = ");
    scanf("%d", &n);
    if(n%2==1){
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                a[i][j]=rand()%10;
        printm(a, n, n);
        printf("\nGol diagonaliin niilber = %d\n", gol_diag(a, n));
        printf("\nHajuu diagonaliin niilber = %d\n\n", hajuu_diag(a, n));
    }
    else printf("\n n sondgoi baih yostoi\n\n");
    system("pause");
    return 0;
}

int gol_diag(int a[][99], int n){
    int s=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i==j)s=s+a[i][j];
    return s;
}
int hajuu_diag(int a[][99], int n){
    int s=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i+j+1==n)s=s+a[i][j];
    return s;
}
int printm(int a[][99], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}
