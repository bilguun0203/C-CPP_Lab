#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	float d, x1, x2;
	start:
	
	// UTGA AVAH
	
	printf("ax^2 + bx + c = 0 \n a, b, c = ");
	scanf("%d %d %d", &a, &b, &c);
	printf("\n");
	
	// D = ?
	
	d = pow(b, 2) - 4 * a * c;
	
	// D SHALGAH
	
	if(d > 0){
		b=0-b;
		x1=(b + sqrt(d)) / 2 * a;
		x2=(b - sqrt(d)) / 2 * a;
		b=0-b;
		printf("%dx^2+%dx+%d=0  =>  x1=%.2f  x2=%.2f\n\n", a, b, c, x1, x2);
	} else if(d == 0){
		x1=b / 2 * a;
		printf("%dx^2+%dx+%d=0  =>  x=%.2f\n\n", a, b, c, x1);
	} else {
		printf("%dx^2+%dx+%d=0  =>  Shiidgui \n\n", a, b, c);
		//goto start;
	}
	system("pause");
}
