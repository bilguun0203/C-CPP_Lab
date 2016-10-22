#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int a;
  float b, n;
  scanf("%f", &n);
  a=sqrt(n);
  b=sqrt(n);
  if(a==b) printf("\n Buhel toonii kvadrat zereg mun : %d^2 = %f\n\n", a, n);
  else printf("\n Buhel toonii kvadrat zereg bish : %d^2 != %f\n\n", a, n);
  system("PAUSE");	
  return 0;
}
