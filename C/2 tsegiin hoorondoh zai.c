#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x1, x2, y1, y2;
	float l;
	printf("A(x1;y1) ");
	scanf("%d %d", &x1, &y1);
	printf("B(x2;y2) ");
	scanf("%d %d", &x2, &y2);
	l = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("Lenght = %.2f\n", l);
	system("pause");
	return 0;
}
