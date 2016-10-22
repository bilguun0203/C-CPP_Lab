#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);
int min(int a, int b);

int main(){
    int a, b, c;
    float z;
    printf("A,B,C = ");
    scanf("%d %d %d", &a, &b, &c);
    z=max(a,b)+min(b,a+c);
    z=z/(max(a+b,c)*min(b,a+c));
    printf("\n%d + %d\n------- = %.2f\n%d * %d \n\n", max(a,b),min(b,a+c),z,max(a+b,c),min(b,a+c));
    system("pause");
}

int max(int a, int b){
    if(a>b)return a;
    else return b;
}
int min(int a, int b){
    if(a<b)return a;
    else return b;
}
