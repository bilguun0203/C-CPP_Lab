#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double bodlogo4(int x, int n);

int main(){
	int x, n;
	printf("X = ");
	scanf("%d", &x);
	printf("N = ");
	scanf("%d", &n);
	printf("\n%f\n\n", bodlogo4(x,n));
	system("pause");
	return 0;
}

double bodlogo4(int x, int n){
	if(n==0)return 0;
	else return sqrt(x+bodlogo4(x,n-1));
}
