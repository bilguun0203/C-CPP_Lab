#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, n=0, m=1;
	float i;
	printf("Too = ");
	scanf("%d", &a);
	i = a % 10;
	n = n + i;
	m = m * i;
	a = a / 10;
	i = a % 10;
	n = n + i;
	m = m * i;
	a = a / 10;
	i = a % 10;
	n = n + i;
	m = m * i;
	a = a / 10;
	i = a % 10;
	n = n + i;
	m = m * i;
	a = a / 10;
	/*while(a>0){
		i = a % 10;
		n = n + i;
		m = m * i;
		a = a / 10;
	}*/
	printf("Tsifruudiin niilber %d \n", n);
	printf("Tsifruudiin urjver %d \n", m);
	system("pause");
	return 0;
}
