#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*const float dollar = 1997;
	const float frank = 2000;
	const float yen = 17;*/
	float dollar, frank, yen;
	float t, d, f, y;
	printf("Dollar = ");
	scanf("%f", &dollar);
	printf("Frank = ");
	scanf("%f", &frank);
	printf("Yen = ");
	scanf("%f", &yen);
	printf("\n\n=========\n\nTugrug = ");
	scanf("%f", &t);
	f = t / frank;
	y = t / yen;
	printf("%.2f Tugrug = %.2f Frank = %.2f Yen \n\n", t, f, y);
	
	t=0; d=0; f=0; y=0;
	printf("Frank = ");
	scanf("%f", &f);
	t = f * frank;
	y = t / yen;
	d = t / dollar;
	printf("%.2f Frank = %.2f Yen = %.2f Dollar\n\n", f, y, d);
	system("pause");
	return 0;
}
