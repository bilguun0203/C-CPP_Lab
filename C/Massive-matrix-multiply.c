#include <stdio.h>

int main(){
    int a[100][100], b[100][100], c[100][100], i, j, k, l, m, n, x=0, y=0;
    printf("a[n][k] x b[k][m] = c[n][m]\n");
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    printf("m = ");
    scanf("%d", &m);

    // Утга олголт

    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            a[i][j]=rand()%10;
        }
    }
    for(i=0;i<k;i++){
        for(j=0;j<m;j++){
            b[i][j]=rand()%11;
        }
    }

    // Үйлдэл

    for(i=0;i<m;i++,y++){
        x=0;
        for(j=0;j<n;j++,x++){
            for(l=0;l<k;l++){
                c[x][y]=c[x][y]+a[j][l]*b[l][i];
            }
        }
    }

    // Хэвлэх

    printf("\nA matrix \n\n");
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nB matrix \n\n");
    for(i=0;i<k;i++){
        for(j=0;j<m;j++){
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    printf("\nC matrix \n\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
