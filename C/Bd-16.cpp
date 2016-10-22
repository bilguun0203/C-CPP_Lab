#include <stdio.h>
#include <stdlib.h>

int tegsh(int n);

int main(){
	int k;
	system("title Tegsh Sondgoi too");
	printf("Too oruulna uu : ");
	scanf("%d", &k);
	if(tegsh(k))printf("\n%d tegsh too\n\n", k);
	else printf("\n%d sondgoi too\n\n", k);
	system("pause");
	return 0;
}

int tegsh(int n){
	if(n%2==0)return 1;
	else return 0;
}
