#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float n, i, f=1, j, s=0;
  printf("1/1!+...+1/n!\n");
  printf("n = ");
  scanf("%f", &n);
  for(i=1;i<=n;i++){
                    f=1;
                    for(j=1;j<=i;j++){
                                      f=f*j;
                    }
                    s=s+1/f;
  }
  printf("\nHariu = %.2f\n\n", s);
  system("PAUSE");	
  return 0;
}
