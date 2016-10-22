#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i=0, k, s=0, t, j=0;
    printf("Armstrong number: ");
    scanf("%d", &n);
    t=n;
    while(t>0){
               t=t/10;
               j++;
               }
    t=n;
    for(i=0;i<j;i++){
               k=t%10;
               s=s+pow(k, 3);
               t=t/10;
               }
    if(n==s)printf("\n%d == %d  Armstrong too mun\n\n", n, s);
    else printf("\n%d != %d Armstrong too bish\n\n", n, s);
    system("pause");
    return 0;
}
