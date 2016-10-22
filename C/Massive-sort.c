#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[100], i, k, j, t;
    scanf("%d", &n);
    for(i=0;i<n;i++)scanf("%d", &a[i]);
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            if(a[j]<a[k]){
                t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)printf("%d ", a[i]);
    printf("\n\n");
    system("pause");
}
