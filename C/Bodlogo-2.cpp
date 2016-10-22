#include <stdio.h>
#include <stdlib.h>

long fact(int n);
long pow(int n, int p);

int main(){
    int a, b, k, n;
    long c, t;
    printf("A = ");scanf("%d", &a);
    printf("B = ");scanf("%d", &b);
    printf("N = ");scanf("%d", &n);
    printf("K = ");scanf("%d", &k);
    printf("%d", fact(n));
    c=fact(n)/(fact(n-k)*fact(k));
    t=c*pow(a, n-k)*pow(b, k);
    printf("\n%d\n\n", t);
    system("pause");
    return 0;
}

long fact(int n, int p){
     if(n==1)return 1;
     return n*fact(n-1);
}
 long pow(int n){
      long m=1;
      for(int i=0; i<p; i++)m=m*n;
      return m;
 }
