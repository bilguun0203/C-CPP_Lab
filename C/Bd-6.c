#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pal(char str[]);
int strlen(char str[]);

int main(){
	char str[100];
	printf("String : ");
	scanf("%s", str);
	switch(pal(str)){
		case 0: printf("\nPalindrom BISH!\n\n");break;
		case 1: printf("\nPalindrom MUN!\n\n");break;
		default: printf("\nAldaa!\n\n");break;
	}
	system("pause");
	return 0;
}

int pal(char str[]){
	int l=strlen(str);
	for(int i=0; i<l; i++){
		if(str[i]!=str[l-i-1]){
			return 0;
		}
		return 1;
	}
	return -1;
}

int strlen(char str[]){
	int i;
	for(i=0; str[i]!='\0'; i++);
	return i;
}
