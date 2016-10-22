#include <stdio.h>
#include <stdlib.h>

#define stu s[i]

struct Student{
       int id;
       char name[20];
       int a;
       int b;
       int c;
       int d;
       float p;
       int score;
       char dun;
};

int main(){
    FILE *in;
    FILE *db;
    int n;
    struct Student s[100];
    db = fopen("student.txt", "w");
    in = fopen("input.txt", "r");
    //printf("Oyutnii too: ");
    fscanf(in, "%d", &n);
    fprintf(db, "Oyutnii too: %d\n\n", n);
    for(int i=0; i<n; i++){
            stu.id=i;
            //printf("Ner: ");
            fscanf(in, "%s", &stu.name);
            //printf("A: ");
            fscanf(in, "%d", &stu.a);
            //printf("B: ");
            fscanf(in, "%d", &stu.b);
            //printf("C: ");
            fscanf(in, "%d", &stu.c);
            //printf("D: ");
            fscanf(in, "%d", &stu.d);
    }
    
    for(int i=0; i<n; i++){
            stu.p=(4*stu.a+3*stu.b+2*stu.c+stu.d);
            stu.p=stu.p/10;
            if(stu.p <= 100 && stu.p >=90){
                     stu.score=4;
                     stu.dun='A';
            } else if(stu.p >=80){
                     stu.score=3;
                     stu.dun='B';
            } else if(stu.p >=70){
                     stu.score=2;
                     stu.dun='C';
            } else if(stu.p >=60){
                     stu.score=1;
                     stu.dun='D';
            } else if(stu.p >=0){
                     stu.score=0;
                     stu.dun='F';
            }
            fprintf(db, "ID: %d\tNer: %s\n", stu.id, stu.name);
            fprintf(db, "\t----------------------\n");
            fprintf(db, "\tA: %d\n", stu.a);
            fprintf(db, "\tB: %d\n", stu.b);
            fprintf(db, "\tC: %d\n", stu.c);
            fprintf(db, "\tD: %d\n", stu.d);
            fprintf(db, "\t----------------------\n");
            fprintf(db, "\tP: %g\n", stu.p);
            fprintf(db, "\tOnoo: %d\n", stu.score);
            fprintf(db, "\tDun: %c\n", stu.dun);
    }
    
    for(int i=0; i<n; i++){
            printf("\nID: %d\tNer: %s\n", stu.id, stu.name);
            printf("\t----------------------\n");
            printf("\tA: %d\n", stu.a);
            printf("\tB: %d\n", stu.b);
            printf("\tC: %d\n", stu.c);
            printf("\tD: %d\n", stu.d);
            printf("\t----------------------\n");
            printf("\tP: %g\n", stu.p);
            printf("\tOnoo: %d\n", stu.score);
            printf("\tDun: %c\n", stu.dun);
            
    }
    fclose(db);
    system("pause");
    return 0;
}
