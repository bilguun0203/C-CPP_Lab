#include <stdio.h>
#include <stdlib.h>

int n, m;

void scanm(int a[][100]);
void printm(int a[][100]);
void maxm(int a[][100], int l[2]);
long min(int a[][100]);
float col_ave(int a[][100], int col);
float col_ave_o(int a[][100]);
void multi(int a[][100]);

int main(){
	int a[100][100], l[2];
	float sa, c_ave_o;
	printf("N: ");scanf("%d", &n);
	printf("M: ");scanf("%d", &m);
	scanm(a);
	printf("\n");
	printm(a);
	printf("\n");
	maxm(a, l);
	printf("Hamgiin ih elementiin bairshil => %d %d\n\n", l[0], l[1]);
	printf("Hamgiin baga elementuudiin kvadratuudiin niilber => %d\n\n", min(a));
	printf("Bagana buriin arifmetic dundaj =>");
	for(int j=0; j<m; j++){
		printf(" %g,", col_ave(a, j));
	}
	printf("\n\nSondgoi dugaartai muruudiin arifmetik dundaj => %g\n\n", col_ave_o(a));
	multi(a);
	printf("Urjsenii daraa\n\n");
	printm(a);
	printf("\n");
	system("pause");
	return 0;
}

void scanm(int a[][100]){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			a[i][j] = rand()%20-4;
			//scanf("%d", &a[i][j]);
		}
	}
}
void printm(int a[][100]){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}
}

void maxm(int a[][100], int l[2]){
	int max=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]>max) {
				max=a[i][j];
				l[0]=i+1;
				l[1]=j+1;
			}
		}
	}
}

long min(int a[][100]){
	int t;
	long s=0;
	for(int j=0; j<m; j++){
		t=a[0][j];
		for(int i=0; i<n; i++){
			if(a[i][j]<t){
				t=a[i][j];
			}
		}
		s=s+t*t;
	}
	return s;
}

float col_ave(int a[][100], int col){
	float sa=0;
	for(int i=0; i<n; i++){
		sa=sa+a[i][col];
	}
	return (sa/n);
}

float col_ave_o(int a[][100]){
	float sa;
	int c=0;
	for(int i=0; i<n; i++){
		if(i%2==1){
			for(int j=0; j<m; j++){
				sa=sa+a[i][j];
			}
			c++;
		}
	}
	return (sa/(c*m));
}

void multi(int a[][100]){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]<0){
				a[i][j]=a[i][j]*-1;
			}
		}
	}
}
