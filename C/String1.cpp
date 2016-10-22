#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int c=0;
    char s[100];
    
    printf("String: ");
    scanf("%s", s);
    
    for(int i=0; i<strlen(s); i++){
            if(s[i]>64 && s[i]<91) c++;
    }
    
    printf("\nTom useg: %d\n\n", c);
    system("pause");
    
    return 0;
}
