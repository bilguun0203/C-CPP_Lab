#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, a=0, t;
    scanf("%d %d", &n, &m);
    if(n>=m) t=n;
    else t=m;
    while(t>=n){
        if(t%n==0 && t%m==0){
            a=t;
            printf("HBEH = %d\n", a);
            break;
        }
        t++;
    }
    system("pause");
}
