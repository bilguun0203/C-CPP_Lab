#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, n, p;
	printf("A^N = ");
	scanf("%d %d", &a, &n);
	p = pow(a, n);
	printf("%d^%d = %d\n", a, n, p);
	system("pause");
	return 0;
}
