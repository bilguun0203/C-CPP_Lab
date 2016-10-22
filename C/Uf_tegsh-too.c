#include <stdio.h>
#include <stdlib.h>

int tegsh(int n){
    return (n%2==0);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("\n1-%d hurtelh tegsh too -> ", n);
    for(int i=1; i<=n; i++){
        if(tegsh(i)) printf("%d ", i);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
