#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, max=0;
    printf("N = ");
    scanf("%d", &n);
    for(int i=0; n>0; i++){
            if(max<n%10)max=n%10;
            else n=n/10;
    }
    printf("\nMAX = %d\n\n", max);
    system("pause");
    return 0;
}
