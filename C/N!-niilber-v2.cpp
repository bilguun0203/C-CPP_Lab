#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, i, f=1, j, s;
  printf("1!+...+n!\n");
  printf("n = ");
  scanf("%d", &n);
  s=n+1;
  for(i=1;i<n;i++){
                    s=s*(n-i)+1;
  }
  s--;
  printf("\nn! niilber = %d\n\n", s);
  system("PAUSE");	
  return 0;
}
