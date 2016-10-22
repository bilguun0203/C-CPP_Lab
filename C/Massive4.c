#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[100], i, c=0, k;
    printf("Elementiin too: ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    printf("Element:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i]<k)c++;
    }
    printf("k-s baga elementiin too: %d\n\n", c);
    system("pause");
}
