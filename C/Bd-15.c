#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int general_member(int a1, int d, int n );

int main(){
	int a1,d,n,k,s;
	printf("/*Arifmetic progressinn ehnii n gishuunii niilberiig oloh*/\n");
	printf("Ehnii gishuun: "); scanf("%d",&a1);
	printf("Yalgawar: "); scanf("%d",&d);
	printf("Heddeh gishuun: "); scanf("%d",&n);
	printf("Ehnii %d gishuunii niilber\n\n", n);
	k=general_member(a1,d,n);
	s=((a1+k)/2)*n;
	printf("        (%d + %d) \n", a1, k);
	printf("S(%d) = ----------- x %d = %d\n", n, n, s);
	printf("           2      ");
	getch();
}

int general_member(int a1, int d, int n ){
	return(a1+d*(n-1));
}




	

