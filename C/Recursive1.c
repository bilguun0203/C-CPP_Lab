#include <stdio.h>
#include <stdlib.h>

long fact(int n);

int main(){
    
    int a, b, n, k, c1=0, c2=0;
    
    printf("N: ");
    scanf("%d", &n);
    printf("K: ");
    scanf("%d", &k);
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    
    if(k<n && b<a){
        if(b!=0 && k!=0){
            c1=fact(n)/(fact(n-k)*fact(k));
            c2=fact(a)/(fact(a-b)*fact(b));
            printf("\nC(n,k) + C(a,b)= %d\n\n", c1+c2);
        }
        printf("\nToog 0-d huvaaj bolohgui!\n\n");
    }
    
    printf("\nZuv utga oruulna uu!\n\n");
    system("pause");
    
    return 0;
}

long fact(int n){
     if(n==0)return 0;
     if(n==1)return 1;
     return (n*fact(n-1));
}
