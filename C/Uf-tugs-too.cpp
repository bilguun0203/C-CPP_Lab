#include <stdio.h>
#include <stdlib.h>

int tugs_too(int n){
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    return s==n;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("\n1-%d hurtelh tugs too -> ", n);
    for(int i=1; i<=n; i++){
        if(tugs_too(i)) printf("%d ", i);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
