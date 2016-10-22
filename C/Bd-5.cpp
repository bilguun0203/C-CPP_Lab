#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int n,k; 
	system("title Huwaagchid");
	printf("/*Ogson toonii huwaagchdiig hewleh*/\n");
	printf("N: "); scanf("%d",&n);
	printf("Ogson toonii huwaagchid: ");
	for(int i=1;i<=n;i++){
		k=n%i;
		if(k==0) printf("%d ",i);
	}
	getch();
}

