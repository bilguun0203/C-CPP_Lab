#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct DATE {
	int year;	
	int month;
	int day;
}bDate;
	
void period();

int main(){	
	int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* day[] = {"NYAM", "DAWAA", "MYAGMAR", "LHAGVA", "PUREV", "BAASAN", "BYAMBA"};
	
	system("title, Torson ognoo");
	printf("/* Tanii torson on, sar, odroos yamar garagt torsniig hewlene */\n\n");
	printf("Year: "); scanf("%d",&bDate.year);
	printf("Month: "); scanf("%d",&bDate.month);
	printf("Day: "); scanf("%d",&bDate.day);
	
	printf("\nTanii torson ognoo: %d/%d/%d ",bDate.year,bDate.month,bDate.day);
	
	if (bDate.year%4==0 && (bDate.year%100!=0 || bDate.year%400==0))
        month[1] = 29;

    if (bDate.year<1900 || bDate.month<1 || bDate.month>12 || bDate.day<1 || bDate.day>month[bDate.month-1]) {
        printf("Buruu on, sar, odor baina.\n");
    	return 1;
    }

    for (int i=1900;i<bDate.year;i++)
        if (i%4==0 && (i%100!=0 || i%400==0))
            bDate.day+=366;
        else
            bDate.day+=365;

    for (int i=0;i<bDate.month-1;i++) 
        bDate.day+=month[i];
        
	printf("\n\n");
	printf("Ta %s garagt torson.\n", day[bDate.day % 7]);
	getch();
}
   
