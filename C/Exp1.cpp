#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int x, a;
    double expr;
    
    printf("x = ");
    scanf("%d", &x);
    printf("a = ");
    scanf("%d", &a);
    
    expr = (exp(x)+cos(a))/log(a);
    
    printf("\nHariu = %g\n\n", expr);
    system("pause");
    
    return 0;
}
