#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  printf("n = ");
  scanf("%d", &n);
  switch(n){
            case 1: printf("\nUvul\n\n"); break;
            case 2: printf("\nUvul\n\n"); break;
            case 3: printf("\nHavar\n\n"); break;
            case 4: printf("\nHavar\n\n"); break;
            case 5: printf("\nHavar\n\n"); break;
            case 6: printf("\nZun\n\n"); break;
            case 7: printf("\nZun\n\n"); break;
            case 8: printf("\nZun\n\n"); break;
            case 9: printf("\nNamar\n\n"); break;
            case 10: printf("\nNamar\n\n"); break;
            case 11: printf("\nNamar\n\n"); break;
            case 12: printf("\nUvul\n\n"); break;
            default: printf("\nSariin dugaar bish\n\n"); break;
  }
  system("PAUSE");	
  return 0;
}
