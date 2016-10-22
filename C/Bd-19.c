#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double urbuu(int n);

int main(){
	int n;
	float sum=0;
	printf("/* 1+1/2+1/3+....+1/n ilerhiilliin niilberiig ol + UDF */\n");
	printf("N: "); scanf("%d",&n);
	sum=urbuu(n);
	if(n>3){
		printf("  1     1              1\n");
		printf(" --- + --- + ...... + --- = %.3f\n",sum);
		printf("  1     2              %d",n);
	}
	else{
		for(int i=1;i<=n;i++){
    		printf("1/%d + ",i);
	}
		printf(" = %.3f", sum);
	}
	getch();
}

double urbuu(int n){
	double sum=0;
	for(double i=1;i<=n;i++){
    	sum=sum+1/i;
	}
	return sum;
}
