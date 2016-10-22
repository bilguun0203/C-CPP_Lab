#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[128];
	int f=0,c=0;
	printf("String: ");
	scanf("%99[^\n]", &str);
	for(int i=0; i<strlen(str); i++){
		if((str[i]>=0 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=255)) f=0;
		else {
			if(f==0)c++;
			f=1;
		}
	}
	printf("\nUgiin too -> %d\n\n", c);
	system("pause");
	return 0;
}
