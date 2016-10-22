#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, i, f=1;
  printf("n!\n");
  printf("n = ");
  scanf("%d", &n);
  for(i=1;i<=n;i++)f=f*i;
  printf("\nn! = %d\n\n", f);
  system("PAUSE");	
  return 0;
}
