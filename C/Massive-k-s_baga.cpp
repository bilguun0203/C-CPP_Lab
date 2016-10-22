#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100][100], i, j, n, k, s=0;
    printf("n= ");
    scanf("%d", &n);
    printf("k= ");
    scanf("%d", &k);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=rand()%100;
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
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]<k){
                s=s+a[i][j];
                a[i][j]=0;
            }
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
