#include <stdio.h>
#include <stdlib.h>

long pow(int n, int p);

int main(){
	int n, m, l, k;
	printf("N = ");
	scanf("%d", &n);
	printf("M = ");
	scanf("%d", &m);
	if(n!=1){
		for(k=0;pow(n,k)<m;k++);
		k--;
		printf("\nK = %d \n%d^%d = %d\n\n", k, n, k, pow(n, k));
	}
	else if(n==1){
		if(m==1)printf("\nK = -+ \n1^-+ = 1\n\n");
		if(m!=1)printf("\nBuruu ugugdul!\n\n");
	}
	system("pause");
	return 0;
}

long pow(int n, int p){
	long answer = 1;
	for(int i=1;i<=p;i++){
		answer = answer * n;
	}
	return answer;
}
