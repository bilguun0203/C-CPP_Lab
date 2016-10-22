#include <stdio.h>
#include <stdlib.h>

void scanm(int a[][100], int n, int m);
void printm(int a[][100], int n, int m);
void selectionSort(int a[][100], int n, int m);

int main(){
	int a[100][100], n, m;
	system("title Massive muruur erembelelt");
	printf("Husnegtiin hemjee : ");
	scanf("%d %d", &n, &m);
	scanm(a, n, m);
	printf("\nErembelegdeegui\n\n");
	printm(a, n, m);
	printf("\nErembelegdsen\n\n");
	selectionSort(a, n, m);
	printm(a, n, m);
	printf("\n");
	system("pause");
	return 0;
}

void scanm(int a[][100], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			a[i][j] = rand()%435;
			//scanf("%d", &a[i][j]);
		}
	}
}
void printm(int a[][100], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}
}
void selectionSort(int a[][100], int n, int m){
	int min, t;
	for(int i=0; i<n; i++){
		for(int j=0; j<m-1; j++){
			min = j;
			for(int k=j+1; k<m; k++){
				if(a[i][k] < a[i][min]) min = k;
			}
			t = a[i][j];
			a[i][j] = a[i][min];
			a[i][min] = t;
		}
	}
}