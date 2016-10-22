#include <stdio.h>
#include <stdlib.h>

long fib(int n);
int j, i=0, k=1;

int main(){
    
    int n;
    
    printf("N: ");
    scanf("%d", &n);
    printf("\nFibonacci: ");
    for(int i=1; i<=n; i++){
        printf(" %d", fib(i));
    }
    printf("\n\n");
    system("pause");
    
    return 0;
}

long fib(int n){
     if(n==0) return 0;
     if(n==1) return 1;
     return fib(n-1)+fib(n-2);
}
