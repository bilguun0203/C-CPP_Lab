#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i=0, j, k=1, l=0;
    printf("Fibonacci: ");
    scanf("%d", &n);
    printf("\n");
    while(l<n){
               j=k+i;
               i=k;
               k=j;
               l++;
               printf("%d,",i);
    }
    printf("\n\n f%d = %d\n\n", n, i);
    system("pause");
    return 0;
}
