#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b[4], i, n=4;
  printf("a = ");
  scanf("%d", &a);
  for(i=0;i<n;i++){
                   b[i]=a%10;
                   a=a/10;
}
  if(b[0]+b[1] == b[2]+b[3])  printf("\n%d Aztai too mun\n\n", a);
  else   printf("\n%d Aztai too bish\n\n", a);
  system("PAUSE");	
  return 0;
}
