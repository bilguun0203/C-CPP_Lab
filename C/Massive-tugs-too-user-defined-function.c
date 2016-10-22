#include <stdio.h>
#include <stdlib.h>

int tugs(int n){
    int a, i, s=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(n==s)a=1;
    else a=0;
    return a;
}

int main(){
    int a[100][100], i, j, n, m;
    printf("n= ");
    scanf("%d", &n);
    printf("m= ");
    scanf("%d", &m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
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
            if(tugs(a[i][j])==1)printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");
    system("pause");
}
