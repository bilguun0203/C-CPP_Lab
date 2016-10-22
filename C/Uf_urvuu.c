#include <stdio.h>
#include <stdlib.h>

int urvuu(int n);

int main(){
    int a, b;
    printf("A=");scanf("%d", &a);
    printf("B=");scanf("%d", &b);
    printf("\n\n");
    for(int i=a; i<=b; i++)printf("%d\t",urvuu(i));
    printf("\n\n");
    system("pause");
}

int urvuu(int n){
    int z, t;
    z=n%10;
    n=n/10;
    while(n>0){
        t=n%10;
        z=z*10+t;
        n=n/10;
    }
    return z;
}
