#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int sum_cipher(int a);

int main(){
    int a,n,i=0,m=0;
    system("title Tsifruudiin niilber");
    printf("/*Ogson toonii tsifruudiin niilber + UDF*/\n");
    printf("A: "); scanf("%d",&a);
    printf("\nTsifruudiin niilber= %d", sum_cipher(a));
    getch();
}

int sum_cipher(int a){
    int n,m=0,i=0;
    while(a>0){
        n=a%10;
        m=m+n;
        a=a/10;
        i++;                   
    }
    return(m);
}   


