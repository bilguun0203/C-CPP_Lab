#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4], n=4, i, j, t;
    printf("4 too oruulna uu : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
