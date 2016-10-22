#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, a[30], j=0, s=0;
    scanf("%d", &n);
    for(i=1;i<n;i++){
                     if(n%i==0){
                                a[j] = i;
                                printf("+%d", a[j]);
                                s=s+a[j];
                                j++;
                     }
    }
    if(n==s)printf(" = %d Tugs too mun\n", s);
    else printf(" != %d Tugs too bish\n", s);
    system("pause");
}
