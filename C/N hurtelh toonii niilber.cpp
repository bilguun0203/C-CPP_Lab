#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, s=0, i;
  printf("1+...+n\n");
  printf("n = ");
  scanf("%d", &n);
  for(i=0;i<=n;i++) s=s+i;
  printf("\nn hurtelh toonii niilber = %d\n\n", s);
  system("PAUSE");	
  return 0;
}
