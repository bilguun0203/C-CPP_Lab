#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>

main(){
    int n, flag, freq=0;
    char letter, str[100]; 
    printf("/*Ogson morond todorhoilogdson useg hed orson*/\n");
	printf("Oguulber: "); gets(str);
    printf("Useg: "); letter=getchar();
	
    for(int i=0;i<strlen(str);i++){
    	if(str[i]==letter){
    		flag=1;
    		freq++;
    	}
    }
    if(flag==1) printf("Tanii oruulsan '%s' ugend '%c' useg %d udaa orson baina",str,letter,freq);
	else printf("Tanii oruulsan '%s' ugend %c useg gants ch udaa oroogui baina",str,letter);
    getch();
}



