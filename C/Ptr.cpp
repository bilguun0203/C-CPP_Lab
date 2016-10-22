#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *args[]){
    int a[20][20], n, m, *max[20];
    printf("N: ");scanf("%d", &n);
    printf("M: ");scanf("%d", &m);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = rand()%75;
        }
    }
    
    printf("\n");
    
    for(int i=0; i<n; i++){
        max[i] = &a[i][0];
        for(int j=0; j<m; j++){
            printf("\t%d", a[i][j]);
            if(*max[i] < a[i][j]) max[i] = &a[i][j];
        }
        printf("\tMAX=> %d\n",/* max[i],*/ *max[i]);
    }
    
    printf("\n");
    system("pause");
    return 0;
}
