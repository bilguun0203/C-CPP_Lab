#include <iostream>
#include <string.h>

using namespace std;

class reader {
    char name[20];
    int age;
    int cbook = 0;
    string interests;
    string books[50];
public:
    void setName(char name[20]);
    void setAge(int a);
    void read(string book);
    void setInterest(string interest);
    char* getName();
    int getAge();
    string* rbooks();
    int rbook_count();
    string getInterests();
};
void reader::setName(char n[20]){
    strcpy(name,n);
}
void reader::setAge(int a){
    age = a;
}
void reader::read(string book){
    books[cbook] = book;
    cbook++;
}
void reader::setInterest(string interest){
    interests = interest;
}
char* reader::getName(){
    return name;
}
int reader::getAge(){
    return age;
}
string* reader::rbooks(){
    return books;
}
int reader::rbook_count(){
    return cbook;
}
string reader::getInterests(){
    return interests;
}

int main(){
    reader r1;
    r1.setAge(18);
    r1.setName("Bilguun");
    r1.setInterest("OOP, History, Computer science...");
    cout << r1.getAge() << endl << r1.getName() << endl << r1.getInterests() << endl << "------------" << endl;
    r1.read("History 1");
    string b;
    getline(cin,b);
    r1.read(b);
    string* books;
    books = r1.rbooks();
    cout << "---Books---" << endl;
    for(int i=0; i<=r1.rbook_count(); i++){
        cout << books[i] << endl;
    }
    return 0;
}
