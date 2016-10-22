#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct TIME {
	int hours;	
	int minutes;
	int seconds;
} t1, t2, per;

void period();

int main(){	
	printf("Tamirchnii garaanaas garsan hugatsaa\n");
	printf("H1: "); scanf("%d",&t1.hours);
	printf("M1: "); scanf("%d",&t1.minutes);
	printf("S1: "); scanf("%d",&t1.seconds);
	
	printf("\n\n");
	
	printf("Tamirchnii bariand orson hugatsaa\n");
	printf("H2: "); scanf("%d",&t2.hours);
	printf("M2: "); scanf("%d",&t2.minutes);
	printf("S2: "); scanf("%d",&t2.seconds);
	
	period();
	
	printf("\nGaraa: %d:%d:%d", t1.hours, t1.minutes, t1.seconds);
	printf("\nBaria: %d:%d:%d", t2.hours, t2.minutes, t2.seconds);
	printf("\nHoorondoh hugatsaa: %d:%d:%d", per.hours, per.minutes, per.seconds);
	getch();
}

void period(){
    per.hours = t2.hours - t1.hours;
    
	if(t1.minutes<t2.minutes) 
		per.minutes=t2.minutes-t1.minutes;
	else if(t1.minutes>t2.minutes){
		per.minutes=((t2.minutes+60)-t1.minutes);
		per.hours--;
	}
	
	if(t1.seconds<t2.seconds) 
		per.seconds=t2.seconds-t1.seconds;
	else if(t1.seconds>t2.seconds){
		per.seconds=((t2.seconds+60)-t1.seconds);
		per.minutes--;
	}		
}
    
