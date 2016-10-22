#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i=0, t, x=0;
    scanf("%d", &n);
    t=n;
    while(t>0){
            x=(x*10)+(t%10);
            t=t/10;
            }
    if(n==x)printf("\n%d palindrom too\n\n", n);
    else printf("\n%d palindrom bish\n\n", n);
    system("pause");
    return 0;
}
