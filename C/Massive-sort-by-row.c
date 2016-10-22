#include <stdio.h>

int main(){
	int a[100][100], i, j, n, m, t, k;
	printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=rand()%10;
        }
    }
    printf("\nNon-Sorted\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i][j]>a[i][k]){
                    t=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=t;
                }
            }
        }
    }
    printf("\nSorted\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
