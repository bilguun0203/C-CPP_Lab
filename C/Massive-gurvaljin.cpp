#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100][100], i, j, n, s=0, ave=0, c=0;
    printf("n= ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            //printf("a[%d][%d]= ", i, j);
            a[i][j]=rand()%10;
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d", a[i][j]);
            if(j<=i){
                     if(j<=n-1-i){
                                  s=s+a[i][j];
                                  ave=ave+a[i][j];
                                  c++;
                     }
            }
            if(j>=n-1-i) if(i+j>=n)s=s+a[i][j];
            if(j>(n-1)/2)if(j>=n-1-i)s=s+a[i][j];
        }
        printf("\n");
    }
    ave=ave/c;
    printf("\n");
    printf("Niilber = %d\n\n", a);
    system("pause");
}
