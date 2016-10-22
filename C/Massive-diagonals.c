#include <stdio.h>

int main(){
	int a[99][99], i, j, s=0, c=0, n;
	float ave=0;
	char z[99][99];
	printf("n = ");
    scanf("%d", &n);
	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=rand()%10;
            z[i][j]='-';
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<=i && j<=n-1-i){
            	ave=ave+a[i][j];
            	s=s+a[i][j];
            	z[i][j]='*';
            	c++;
            }
            if (i+j>=n)
            {
                s=s+a[i][j];
                z[i][j]='+';
            }
            if (j>(n-1)/2 && j==n-1-i)
            {
                s=s+a[i][j];
                z[i][j]='+';
            }
        }
    }
    ave=ave/c;
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
            printf("\t%c", z[i][j]);
        }
        printf("\n");
    }
    printf("\n * Dundaj olson toonuud\n *,+ Niilber olson toonuud\n - Ashiglagdaagui toonuud\n");
    printf("\n Dundaj = %.3f\n Niilber = %d\n\n", ave, s);
	return 0;
}
