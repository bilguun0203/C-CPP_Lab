#include <stdio.h>
#include <stdlib.h>

int tegsh(int n);

int main(){
    int n, s=0;
    printf("N=");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)if(tegsh(i))s=s+i;
    printf("\n1-%d hurtelh tegsh toonii SUM = %d\n\n", n, s);
    system("pause");
}

int tegsh(int n){
    return(n%2==0);
}
