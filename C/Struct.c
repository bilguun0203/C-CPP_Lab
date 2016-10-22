#include <stdio.h>
#include <stdlib.h>

struct student{
       int id;
       char name[20];
       int age;
};

int main(){
    struct student s1;
    scanf("%d %s %d", &s1.id, &s1.name, &s1.age);
    printf("\nID: %d\nName: %s\nAge: %d\n\n", s1.id, s1.name, s1.age);
    system("pause");
    return 0;
}
