#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  printf("n = ");
  scanf("%d", &n);
  switch(n){
            case 1: printf("\nDavaa\n\n"); break;
            case 2: printf("\nMyagmar\n\n"); break;
            case 3: printf("\nLhagva\n\n"); break;
            case 4: printf("\nPurev\n\n"); break;
            case 5: printf("\nBaasan\n\n"); break;
            case 6: printf("\nByamba\n\n"); break;
            case 7: printf("\nNyam\n\n"); break;
            default: printf("\nGaragiin dugaar bish\n\n"); break;
  }
  system("PAUSE");	
  return 0;
}
