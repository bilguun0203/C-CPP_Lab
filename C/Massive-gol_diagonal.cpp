#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100][100], i, j, n, s=0;
    printf("n= ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            //printf("a[%d][%d]= ", i, j);
            a[i][j]=rand()%100;
            if(i==j)s=s+a[i][j];
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Niilber = %d\n\n", s);
    system("pause");
}