#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, a[100], b[99];
	printf("\n\ty=An*X^n+...+A1*X^1+A0*X^0\n\n");
	printf("n = ");scanf("%d", &n);
	for(int i=n; i>=0; i--){
		printf("(A*X^%d) A = ", i);
		scanf("%d", &a[i]);
	}
	for(int i=n; i>=0; i--){
		b[i]=a[i]*i;
	}
	printf("\nUlamjlal => ");
	for(int i=n; i>=0; i--){
		if(b[i]!=0){
			printf("%d ", b[i]);
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
