#include <stdio.h>
#include <stdlib.h>

#define NEWLINE printf("\n");

int main(){
	int a[100][100], n, c;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			//scanf("%d", &a[i][j]);
			a[i][j]=rand()%10-8;
		}
	}
	NEWLINE
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("\t%d", a[i][j]);
		}
		NEWLINE
	}
	NEWLINE
	printf("Buh element ni surug mur => ");
	for(int i=0; i<n; i++){
		c=0;
		for(int j=0; j<n; j++){
			if(a[i][j]<0)c++;
		}
		if(c==n)printf("%d ", i+1);
	}
	NEWLINE
	printf("Buh element ni adilhan bagana => ");
	for(int j=0; j<n; j++){
		c=0;
		for(int i=1; i<n; i++){
			if(a[i][j]==a[i-1][j])c++;
		}
		if(c==n-1)printf("%d ", j+1);
	}
	NEWLINE NEWLINE
	system("pause");
}
