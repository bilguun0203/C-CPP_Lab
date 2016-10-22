#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x1, x2;
  float a, y1, y2;
  scanf("%f", &a);
  x1=a/3;
  y1=a/3;
  x2=a/5;
  y2=a/5;
  if(x1==y1 && x2==y2) printf("\n3 bolon 5-d zereg huvaagdana\n\n");
  else printf("\n3 bolon 5-d zereg huvaagdahgui!\n\n");
  system("PAUSE");	
  return 0;
}
