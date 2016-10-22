#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, k, a[30], j=0, s=0;
    scanf("%d %d", &n, &m);
    printf("\n%d - %d hurtelh anhii too: \n", n, m);
    while(n<=m){
        for(k=2;k<n;k++){
            if(n%k==0){
                k=0;
                break;
            }
        }
    if(k!=0)printf("%d, ", n);
    n++;
    }
    printf("\n");
    system("pause");
}
