#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, a[100], s=0, b[100];
    printf("Elementiin too = ");
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=0;i<n;i++){
        s=s+a[i];
        b[i]=s/(i+1);
    }
    for(i=0;i<n;i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    system("pause");
}
