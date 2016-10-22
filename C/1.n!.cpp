#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;
    float n, e=1;
    printf("n = ");
    scanf("%f", &n);
    while(i<n){
               e=e*(1/(n-i))+1;
               i++;
    }
    e--;
    printf("\n1         1");
    printf("\n- + ... + - = %.4f", e);
    printf("\n1!        n!\n\n");
    system("pause");
    return 0;
}
