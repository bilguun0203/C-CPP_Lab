#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100][100], i, j, n, m, k, s;
    printf("n= ");
    scanf("%d", &n);
    printf("m= ");
    scanf("%d", &m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            //printf("a[%d][%d]= ", i, j);
            //scanf("%d", &a[i][j]);
            a[i][j]=rand()%10;
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Tugs toonuud: ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            s=0;
            for(k=1;k<a[i][j];k++){
                if(a[i][j]%k==0){
                    s=s+k;
                }
            }
            if(a[i][j]==s)printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");
    system("pause");
}
