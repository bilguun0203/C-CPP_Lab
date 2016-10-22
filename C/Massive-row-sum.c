#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100][100], i, j, n, m, s[100], max;
    printf("n= ");
    scanf("%d", &n);
    printf("m= ");
    scanf("%d", &m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j]=rand()%100;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            s[i]+=a[i][j];
        }
    }
    
    printf("\n");
    for(i=0;i<n;i++){
        printf("\n%d > ", i);
        for(j=0;j<m;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\tsum => %d", s[i]);
        printf("\n");
    }
    max=0;
    for(i=0,j=1;i<n;i++,j++){
        if(s[i]<s[j]) max=j;
    }
    printf("\nMax : %d\n\n", max);
    system("pause");
    return 0;
}
