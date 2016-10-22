#include <iostream>
#include <string.h>

using namespace std;

class student {
    char* id;
    float gpa=0;
public:
    char* name;
    int level;
    student(char[], char[], int);
    void set_all(char[], char[], int, float);
    void set_name(char[]);
    void set_id(char[]);
    void set_level(int);
    void set_gpa(float);
    char* get_name();
    char* get_id();
    int get_level();
    float get_gpa();
    void stdcopy(student &);
    bool greatThan(student &);
    bool lessThan(student &);
    bool isEqual(student &);
    bool before(student &);
    bool after(student &);
    ~student();
};

student::student(char ner[] = "", char dugaar[] = "", int tuvshin = 1){
    name = new char[sizeof(ner+1)];
    id = new char[sizeof(dugaar+1)];
    strcpy(name,ner);
    strcpy(id,dugaar);
    level = tuvshin;
}

void student::set_all(char ner[], char dugaar[], int tuvshin, float onoo){
    set_name(ner);
    set_id(dugaar);
    set_level(tuvshin);
    set_gpa(onoo);
}
void student::set_name(char ner[]){
    if(name!=nullptr)
        delete []name;
    name = new char[sizeof(ner+1)];
    strcpy(name,ner);
}
void student::set_id(char dugaar[]){
    id = new char[sizeof(dugaar+1)];
    strcpy(id,dugaar);
}
void student::set_level(int a){
    level = a;
}
void student::set_gpa(float a){
    gpa = a;
}
char* student::get_name(){
    return name;
}
char* student::get_id(){
    return id;
}
int student::get_level(){
    return level;
}
float student::get_gpa(){
    return gpa;
}

void student::stdcopy(student &s){
    name = new char[sizeof(s.get_name())+1];
    strcpy(name,s.get_name());
    id = new char[sizeof(s.get_id())+1];
    strcpy(id,s.get_id());
    level = s.get_level();
    gpa = s.get_gpa();
}

bool student::greatThan(student &s){
    if(level>s.get_level())
        return true;
    else
        return false;
}
bool student::lessThan(student &s){
    return !greatThan(s);
}
bool student::isEqual(student &s){
    return level==s.get_level();
}
bool student::after(student &s){
    if(strcmp(name,s.get_name())>0)
        return true;
    else
        return false;
}
bool student::before(student &s){
    if(strcmp(name,s.get_name())<(0))
        return true;
    else
        return false;
}

student::~student(){
    delete []name;
    delete []id;
}

void sort_student_name(student[], int);
void sort_student_level(student[], int);

int main(){
    student s[10] = {
        student ("Anu","15b1seas1249",2),
        student ("Bat","14b1seas4222",3),
        student ("Bilguun","15b1seas0991",2),
        student ("Erdene","14b1seas1249",3),
        student ("Tengis","13b1seas1249",4),
        student ("Anand","16b1seas1249",1),
        student ("Bold","15b1seas1249",2),
        student ("Nomin","13b1seas1249",4),
        student ("Zaya","14b1seas1249",3),
        student ("Dulguun","13b1seas1249",4)
    };

    cout << "#\t" << "Name\t" << "ID\t\t" << "Level\t" << "GPA" << endl;
    for(int i=0; i<10; i++){
        cout << i << ":\t" << s[i].get_name() << "\t" << s[i].get_id() << "\t" << s[i].get_level() << "\t" << s[i].get_gpa() << endl;
    }
    cout << "--- Sort Name ---" << endl;
    sort_student_name(s,10);
    for(int i=0; i<10; i++){
        cout << i << ":\t" << s[i].get_name() << "\t" << s[i].get_id() << "\t" << s[i].get_level() << "\t" << s[i].get_gpa() << endl;
    }
    cout << "--- Sort Level ---" << endl;
    sort_student_level(s,10);
    for(int i=0; i<10; i++){
        cout << i << ":\t" << s[i].get_name() << "\t" << s[i].get_id() << "\t" << s[i].get_level() << "\t" << s[i].get_gpa() << endl;
    }
    return 0;
}

void sort_student_name(student s[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i].after(s[j])){
                student temp;
                temp.stdcopy(s[i]);
                s[i].stdcopy(s[j]);
                s[j].stdcopy(temp);
            }
        }
    }
}

void sort_student_level(student s[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i].greatThan(s[j])){
                student temp;
                temp.stdcopy(s[i]);
                s[i].stdcopy(s[j]);
                s[j].stdcopy(temp);
            }
            else if(s[i].isEqual(s[j])){
                if(s[i].after(s[j])){
                    student temp;
                    temp.stdcopy(s[i]);
                    s[i].stdcopy(s[j]);
                    s[j].stdcopy(temp);
                }
            }
        }
    }
}
