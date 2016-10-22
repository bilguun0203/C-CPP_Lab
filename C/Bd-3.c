#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    long a,n,i=0,m=0;
    system("title Tsifruudiin niilber");
    printf("/*Ogson toonii tsifruudiin niilber*/\n");
    printf("A: "); scanf("%d",&a);
    
    while(a>0){
               n=a%10;
               m=m+n;
               a=a/10;
               i++;                   
               }
    printf("\nTsifruudiin niilber= %d", m);
    getch();
}


