#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);
long fact(int n);

int main(){
    int n, m, c;
    double a;
    printf("N=");scanf("%d",&n);
    printf("M=");scanf("%d",&m);
    printf("C=");scanf("%d",&c);
    a=fact(n)+max(n-c,m+c);
    a=a/(fact(n-m)+max(n,max(m,c)));
    printf("\n%ld + %d\n----------- = %.3f\n%d + %d\n\n", fact(n),max(n-c,m+c),a,fact(n-m),max(n,max(m,c)));
    system("pause");
}

int max(int a, int b){
    if(a>b)return a;
    else return b;
}
long fact(int n){
     long m = 1;
     for(int i=1; i<=n; i++)m=m*i;
     return m;
}
