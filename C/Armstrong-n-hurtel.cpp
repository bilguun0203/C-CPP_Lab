#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i=0, k, s=0, t, j, l, m, x, y;
    scanf("%d", &m);
    for(n=1;n<=m;n++){
        t=n;
        j=0;
        while(t>0){
            t=t/10;
            j++;
        }
        for(i=1;i<j;i++)n=n*10;
        t=n;
        x=n*10;
        for(t=n;t<x;t++){
            y=t;
            s=0;
            for(i=0;i<j;i++){
                k=y%10;
                y=y/10;
                s=s+pow(k, j);
            }
            if(t==s)printf("%d,", s);
        }
    }
    system("pause");
    return 0;
}
