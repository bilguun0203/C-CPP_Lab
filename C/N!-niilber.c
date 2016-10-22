#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, i, f=1, j, s=0;
  printf("1!+...+n!\n");
  printf("n = ");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
                    f=1;
                    for(j=1;j<=i;j++){
                                      f=f*j;
                    }
                    s=s+f;
  }
  printf("\nn! niilber = %d\n\n", s);
  system("PAUSE");	
  return 0;
}
