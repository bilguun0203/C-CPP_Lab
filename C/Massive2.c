#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[100], i, s=1;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i]%2==1)s=s*a[i];
    }
    printf("Massiviin sondgoi elementuudiin urjver = %d\n\n", s);
    system("pause");
}
