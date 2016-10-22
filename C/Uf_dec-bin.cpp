#include <stdio.h>
#include <stdlib.h>

void dec_bin(long n);// 10 --> 2
long bin_dec(long n);// 2 --> 10
int lenght(long n);
long pow(long n, int p);

int main(){
	long n;
    int s=1;
        printf("\n\tUildlee songono uu:\n\t1. 10->2 shiljuuleh\n\t2. 2->10 shiljuuleh\n\t0. Programaas garah\n");
    while(s!=0){
        printf("\nUildel > ");
        scanf("%d", &s);
        switch(s){
	        case 0: break;
	        case 1: printf("\n\tN = ");scanf("%d", &n);if(n>0){
					printf("\t%d => ", n);dec_bin(n);printf("\n\n");
					break;
				}else {
					printf("\nAldaa! N > 0 baih yostoi\n\n");
				}break;
	        case 2: printf("\n\tN = ");scanf("%d", &n);if(n>0){
	        	printf("\t%d => %d\n\n", n, bin_dec(n));
				break;
			} else {
				printf("\nAldaa! N > 0 baih yostoi\n\n");
			}break;
	        default: printf("\n0, 1, 2 gesen songoltuudaas oruulna uu!\n");break;
        }
    }
    return 0;
}

// 10 --> 2
void dec_bin(long n){
    int t, a[100], i=0, j;
    while(n!=0){
    a[i++]=n%2;
    n=n/2;
    }
    for(j=i-1;j>=0;j--){
    printf("%d", a[j]);
    }
}
// 2 --> 10
long bin_dec(long n){
	long s=0;
    for(int i=0; n>0; i++){
    	if(n%10!=0 && n%10!=1){
    		return 0;
		}
    	s=s+((n%10)*pow(2, i));
    	n=n/10;
	}
	return s;
}
//Zereg
long pow(long n, int p){
    long a=1;
    for(int i=1;i<=p;i++)a=a*n;
    return a;
}