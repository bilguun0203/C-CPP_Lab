#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int prime_number(int n);

int main(){
	int n,k; 
	system("title Anhnii too");
	printf("/*N hurtelh buh anhnii toog hewleh*/\n");
	printf("N: "); scanf("%d",&n);
	printf("1-ees %d hurtelh anhnii too:\n",n);
	for(int i=1;i<=n;i++){
		if(prime_number(i)==1){
			printf("\n%d",i);	
		}
	}
	getch();
}

int prime_number(int n){
	int k=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			k=1;
          	break;
        }
    }
    if (k==0) return(1);
    else return (0);
}

