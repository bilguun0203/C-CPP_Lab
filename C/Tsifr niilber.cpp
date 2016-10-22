#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, s, i=0, j, k=0;
  printf("n = ");
  scanf("%d", &n);
  s=n;
  if(n<0)s=s*(-1);
  while(s>0){
             j=s%10;
             k=k+j;
             s=s/10;
             i++;
  }
  printf("\n%d toonii tsifr %d, tsifruudiin niilber %d\n\n", n, i, k);
  system("PAUSE");	
  return 0;
}
