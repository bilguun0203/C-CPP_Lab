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
            if(a[i][j]%2==0)s++;
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
    printf("Tegsh elementuud = %d\n\n", s);
    system("pause");
}
