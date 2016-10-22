#include <stdio.h>
#include <stdlib.h>

int dSum(int n);

int main(){
    int a, b, s=0;
    printf("A;B = ");
    scanf("%d %d", &a, &b);
    for(int i = a; i<=b; i++){
        s = s + dSum(i);
    }
    printf("\n(a;b) tsifruudiin niilber = %d\n\n", s);
    system("pause");
}

int dSum(int n){
    int t, s=0;
    while(n>0){
    t=n%10;
    s=s+t;
    n=n/10;
    }
    return s;
}
