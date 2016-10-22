#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x1, x2, x3, y1, y2, y3;
	float a, b, c, p, hp, s;
	printf("A(x1;y1) => ");
	scanf("%d %d", &x1, &y1);
	printf("B(x2;y2) => ");
	scanf("%d %d", &x2, &y2);
	printf("C(x3;y3) => ");
	scanf("%d %d", &x3, &y3);
	a = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	b = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
	c = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	p = a + b + c;
	hp = p / 2;
	s = sqrt(hp*(hp-a)*(hp-b)*(hp-c));
	printf("\nGurvaljnii P=%.2f, S=%.2f\n\n", p, s);
	system("pause");
	return 0;
}
