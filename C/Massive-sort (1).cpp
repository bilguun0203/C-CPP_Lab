#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[100][100], t[10000], i, j, n, m, k, c=0, temp;
	printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=rand()%100;
        }
    }
    printf("\nErembeleegui\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    // 2D to 1D
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            t[c]=a[i][j];
            c++;
        }
    }
    //Sort
    for(i=0;i<c;i++){
        for(j=i+1;j<c;j++){
            if(t[i]>t[j]){
                temp=t[j];
                t[j]=t[i];
                t[i]=temp;
            }
        }
    }
    // 1D to 2D
    c=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=t[c];
            c++;
        }
    }
    printf("\nErembelsen\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
