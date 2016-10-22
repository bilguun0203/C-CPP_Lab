#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char s[100];
    
    printf("String: ");
    scanf("%s", s);
    
    for(int i=0; i<strlen(s); i++){
            if(s[i]==97) s[i]=111;
    }
    
    printf("\nSoligdson: %s\n\n", s);
    system("pause");
    
    return 0;
}
