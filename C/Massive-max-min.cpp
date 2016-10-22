#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100][100], i, j, n, m, s=0, max[100], min, k;
    printf("n= ");
    scanf("%d", &n);
    printf("m= ");
    scanf("%d", &m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            //printf("a[%d][%d]= ", i, j);
            a[i][j]=rand()%100;
            if(a[i][j]>max[i])max[i]=a[i][j];
        }
    }
    printf("\n");
    min=max[0];
    for(i=0;i<n;i++){
        k=i+1;
        for(j=0;j<m;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\tmax => %d", max[i]);
        printf("\n");
        if(min>max[i])min=max[i];
    }
    printf("\n");
    printf("\tmin => %d\n\n", min);
    system("pause");
}
