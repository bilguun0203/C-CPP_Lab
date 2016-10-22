#include <stdio.h>
#include <stdlib.h>

double fact(int n);

int main(){
	int n;
	double s=0;
	system("title Fact");
	printf("1/1!+1/2!+...+1/n!\nN = ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s=s+1/fact(i);
	}
	printf("\n%g\n\n", s);
	system("pause");
	return 0;
}

double fact(int n){
	double s=1;
	for(int i=1; i<=n; i++){
		s=s*i;
	}
	return s;
}
