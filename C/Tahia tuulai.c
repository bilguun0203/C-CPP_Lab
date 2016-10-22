#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, x, y;
    printf("Hulnii too /tegsh/ bolon amitnii toog oruulna uu\n\n");
    scanf("%f %f", &m, &n);
    if(m/2 < n) printf("\nBolomjgui\n\n");
	else{
		y=m-2*n;
		y=y/2;
		x=n-y;
		printf("\n\nTahia: %.0f\n", x);
		printf("Tuulai: %.0f\n\n", y);
	}
    system("pause");
    return 0;
}
