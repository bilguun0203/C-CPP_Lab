#include <stdio.h>
#include <stdlib.h>

void scanm(int a[], int n);
void printm(int a[], int n);
int bodlogo14(int a[], int n, int i);

int main(){
	int a[100], b[100], n;
	system("title b husnegt uusgeh");
	printf("Husnegtiin hemjee : ");
	scanf("%d", &n);
	scanm(a, n);
	for(int i=0; i<n; i++){
		b[i]=bodlogo14(a, n-1, i);
	}
	printf("\nA massive: ");
	printm(a, n);
	printf("\nB Massive: ");
	printm(b, n);
	printf("\n\n");
	system("pause");
	return 0;
}

void scanm(int a[], int n){
	for(int i=0; i<n; i++){
		a[i] = rand()%10;
		//scanf("%d", &a[i][j]);
	}
}
void printm(int a[], int n){
	for(int i=0; i<n; i++){
		printf("\t%d", a[i]);
	}
}

int bodlogo14(int a[], int n, int i){
	if(n<0) return 0;
	if(n==i) return bodlogo14(a, n-1, i);
	else return a[n]+bodlogo14(a, n-1, i);
}
