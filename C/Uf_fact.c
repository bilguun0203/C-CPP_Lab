#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    int f=1;
    for(int i=1; i<=n; i++)f=f*i;
    return f;
}

int main(){
    int n, k;
    float c;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    if(k<n){
        c=fact(n)/(fact(k)*fact(n-k));
        printf("\nc = %f\n\n", c);
        }
    else printf("\nk<n baih yostoi\n\n");
    system("pause");
    return 0;
}
