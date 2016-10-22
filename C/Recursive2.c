#include <stdio.h>
#include <stdlib.h>

float pow(float n, float p);

int main(){
    
    float n, x, y, q, a;
    
    printf("X: ");
    scanf("%f", &x);
    printf("Y: ");
    scanf("%f", &y);
    printf("N: ");
    scanf("%f", &n);
    printf("Q: ");
    scanf("%f", &q);
    
    a=(pow(x, y)+pow(n, q))/n;
    
    printf("\n(x^y+n^q)/n= %g\n\n", a);
    system("pause");
    
    return 0;
}

float pow(float n, float p){
     if(p==0)return 1;
     return (n*pow(n, p-1));
}
