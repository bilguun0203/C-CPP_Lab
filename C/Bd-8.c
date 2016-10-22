#include <stdio.h>
#include <stdlib.h>

void strtoupper(char str[]);

int main(){
	char str[100];
	printf("Tomruulah ugee oruulna uu: ");
	scanf("%s", &str);
	strtoupper(str);
	printf("\n%s\n\n", str);
	system("pause");
	return 0;
}

void strtoupper(char str[]){
	char up[100];
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]>96 && str[i]<123){
			str[i] = str[i]-32;
		}
	}
}
