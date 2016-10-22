#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int num_digits(int a);

int main(){
	int n, freq, sum=0;
	printf("/* N hurtelh huudastai setguuld heden shirheg tsifr oroh we? */\n");
	system("title Setguul");
	printf("Setguuliin nuurnii too: "); scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=num_digits(i);
	}
	printf("\n1-ees %d nuurtei setguuliig dugaarlahin tuld %d shirheg tsifr heregtei.",n,sum);	
	getch();
}

int num_digits(int a){
    int freq=0;
    while(a!=0){
		a/=10;
		++freq;
    }
    return(freq);
}   
