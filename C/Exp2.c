#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int a, b, x, y;
    double h;
    
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    
    h=abs(a-b)+sqrt(b)+pow(x, y);
    
    printf("\nHariu = %g\n\n", h);
    system("pause");
    return 0;
}
