#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float n, i, f=1, j, s;
  printf("1/1!+...+1/n!\n");
  printf("n = ");
  scanf("%f", &n);
  s=1/n;
  s++;
  for(i=1;i<n;i++){
                   s=s*(1/(n-i))+1;
  }
  s--;
  printf("\nn! niilber = %.2f\n\n", s);
  system("PAUSE");	
  return 0;
}
