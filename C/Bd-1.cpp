#include <stdio.h>
#include <stdlib.h>

int main(){
	float x;
	printf("X = ");
	scanf("%f", &x);
	if(x<0)x=x*x;
	else if(x>=0 && x<1)x=x*x*x;
	else if(x>=0.1);
	printf("\nHariu = %g\n\n", x);
	system("pause");
	return 0;
}
