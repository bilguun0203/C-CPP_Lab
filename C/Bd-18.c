#include <stdio.h>
#include <stdlib.h>

int convert(int n);

int main(){
	int n;
	system("title Hurvusun too");
	printf("Too oruulna uu : ");
	scanf("%d", &n);
	printf("\nHurvusun too : %d\n\n", convert(n));
	system("pause");
	return 0;
}

int convert(int n){
	int a=0;
	while(n>0){
		a=a*10+n%10;
		n=n/10;
	}
	return a;
}
