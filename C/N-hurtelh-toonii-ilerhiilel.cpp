#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float n, i, s1=0, s2=0;
  printf("1+...+(2n-1)\n");
  printf("--------------\n");
  printf("  2+...+2n\n");
  printf("n = ");
  scanf("%f", &n);
  for(i=1;i<=n;i++){
                    s1=s1+(2*i-1);
                    s2=s2+2*i;
  }
  printf("\nHariu = %.2f\n\n", s1/s2);
  system("PAUSE");	
  return 0;
}
