//
// Created by bilguun on 11/22/16.
//

#include <iostream>
#include <math.h>
#include <string.h>

#define PI 3.14

using namespace std;

/**
 * @class shape
 * гишүүн өгөгдөл - x, y цэгийн координат
 * гишүүн функц - x, y өгөгдлийн get(), set(int) функцууд, perimeter() периметр олох жинхэнэ виртуал функц
 */
class shape {
protected:
    char *name = new char;
    float *x = new float;
    float *y = new float;
    int n;
    float a;
    void setN(int);
public:
    shape();
    shape(float, float, float, char[], int);
    virtual float getX(int);
    virtual void setX(float, int);
    virtual float getY(int);
    virtual void setY(float, int);
    virtual float getA();
    virtual void setA(float);
    virtual char *getName();
    virtual void setName(char[]);
    virtual double perimeter() = 0;
    int getN();
    ~shape();
};

shape::shape() {
    setN(1);
    setX(0, 0);
    setY(0, 0);
    setName((char *) "");
    setA(0);
}
shape::shape(float x, float y, float d, char name[], int n) {
    setN(n);
    setX(x, 0);
    setY(y, 0);
    setA(d);
    setName(name);
}
float shape::getX(int i) {
    return x[i];
}
void shape::setX(float x, int i) {
    this->x[i] = x;
}
float shape::getY(int i) {
    return y[i];
}
void shape::setY(float y, int i) {
    this->y[i] = y;
}
float shape::getA(){
    return this->a;
}
void shape::setA(float d){
    this->a = d;
}
void shape::setN(int n){
    this->n = n;
    if(x != nullptr) {
        delete[] x;
    }
    if(y != nullptr) {
        delete[] y;
    }
    this->x = new float[n];
    this->y = new float[n];
}
char *shape::getName(){
    return this->name;
}
void shape::setName(char _name[]) {
    if(name!= nullptr){
        delete[] name;
    }
    name = new char[strlen(_name)+1];
    strcpy(name,_name);
}
int shape::getN() {
    return n;
}
shape::~shape() {
    delete[] x;
    delete[] y;
    delete[] name;
}

/**
 * @class shape2D
 * гишүүн функц - area() талбай олох жинхэнэ виртуал функц
 */
class shape2D : public shape {
public:
    shape2D();
    shape2D(float, float, float, char[], int);
    virtual double area() = 0;
    void operator=(shape2D &);
};
shape2D::shape2D(){}
shape2D::shape2D(float x, float y, float a, char name[], int n):shape(x, y, a, name, n){}
void shape2D::operator=(shape2D &s) {
    this->setName(s.getName());
    this->setN(s.getN());
    for(int i=0; i<this->n; i++){
        this->setX(s.getX(i), i);
        this->setY(s.getY(i), i);
    }
}

/**
 * @class circle
 * гишүүн өгөгдөл - r радиус
 * гишүүн функц - радиусын get(), set(int), периметр, талбай
 */
class circle : public shape2D {
public:
    circle();
    circle(float, float, float, char[]);
    double perimeter();
    double area();
};

circle::circle() {}
circle::circle(float x, float y, float r, char name[]):shape2D(x, y, r, name, 1) {}

double circle::perimeter() {
    return 2 * this->a * PI;
}
double circle::area(){
    return this->a * this->a * PI;
}

/**
 * @class квадрат
 * гишүүн өгөгдөл - a талын урт
 * гишүүн функц - талын урт, цэгүүдийн get(), set(int), периметр, талбай, цэгүүдийг олох setPoints()
 */
class square : public shape2D {
private:
    void setPoints();
public:
    square();
    square(float, float, float, char[]);
    void setX(float, int);
    void setY(float, int);
    double perimeter();
    double area();
    square operator=(square &);
};

square::square():shape2D(0, 0, 0, (char *) "", 4) {
    this->setPoints();
}
square::square(float x, float y, float a, char name[]):shape2D(x, y, a, name, 4){
    this->setPoints();
}
void square::setX(float x, int i) {
    shape::setX(x, i);
    this->setPoints();
}
void square::setY(float y, int i) {
    shape::setY(y, i);
    this->setPoints();
}
double square::perimeter() {
    return this->a * 4;
}
double square::area() {
    return this->a * this->a;
}
void square::setPoints() {
    this->x[1] = this->x[0] + a;
    this->y[1] = this->y[0];
    this->x[2] = this->x[1];
    this->y[2] = this->y[0] - a;
    this->x[3] = this->x[0];
    this->y[3] = this->y[2];
}
square square::operator=(square &s) {
    this->setName(s.getName());
    this->setN(s.getN());
    for(int i=0; i<this->n; i++){
        this->setX(s.getX(i), i);
        this->setY(s.getY(i), i);
    }
}

/**
 * @class гурвалжин
 * гишүүн өгөгдөл - a талын урт
 * гишүүн функц - талын урт, цэгүүдийн get(), set(int), периметр, талбай, цэгүүдийг олох setPoints()
 */
class triangle : public shape2D {
private:
    void setPoints();
public:
    triangle();
    triangle(float, float, float, char[]);
    void setX(float, int);
    void setY(float, int);
    double perimeter();
    double area();
    triangle operator=(triangle &);
};

triangle::triangle() {
    this->setPoints();
}
triangle::triangle(float x, float y, float a, char name[]):shape2D(x, y, a, name, 3) {
    this->setPoints();
}
void triangle::setX(float x, int i) {
    shape::setX(x, i);
    this->setPoints();
}
void triangle::setY(float y, int i) {
    shape::setY(y, i);
    this->setPoints();
}
double triangle::perimeter() {
    return this->a * 3;
}
double triangle::area() {
    return (sqrt(3)/4)*a*a;
}
void triangle::setPoints() {
    float h = (sqrt(3)/2)*(this->a);
    float ah = this->a/2;
    this->x[1] = this->x[0] + ah;
    this->x[2] = this->x[0] - ah;
    this->y[1] = this->y[0] - h;
    this->y[2] = this->y[0] - h;
}
triangle triangle::operator=(triangle &s) {
    this->setName(s.getName());
    this->setN(s.getN());
    for(int i=0; i<this->n; i++){
        this->setX(s.getX(i), i);
        this->setY(s.getY(i), i);
    }
}

/**
 * @class shape3D
 * гишүүн өгөгдөл - z координат
 * гишүүн функц - volume() эзэлхүүн олох жинхэнэ виртуал функц, z утга олгох, авах функц
 */
class shape3D : public shape {
protected:
    float *z = new float;
    void setN(int);
public:
    shape3D();
    shape3D(float, float, float, float, char[], int);
    void setZ(float, int);
    float getZ(int);
    virtual double area() = 0;
    virtual double volume() = 0;
//    shape3D operator=(shape3D &);
    ~shape3D();
};

shape3D::shape3D() {
    this->setN(1);
    this->setZ(0, 0);
}
shape3D::shape3D(float x, float y, float z, float d, char name[], int n):shape(x, y, d, name, n) {
    this->setN(n);
    this->setZ(z, 0);
}
void shape3D::setN(int n) {
    this->n = n;
    if(x != nullptr) {
        delete[] x;
    }
    if(y != nullptr) {
        delete[] y;
    }
    if(z != nullptr) {
        delete[] z;
    }
    this->x = new float[n];
    this->y = new float[n];
    this->z = new float[n];
}
void shape3D::setZ(float z, int i) {
    this->z[i] = z;
}
float shape3D::getZ(int i) {
    return this->z[i];
}
//shape3D shape3D::operator=(shape3D &s) {
//    this->setName(s.getName());
//    this->setN(s.getN());
//    for(int i=0; i<this->n; i++){
//        this->setX(s.getX(i), i);
//        this->setY(s.getY(i), i);
//        this->setZ(s.getZ(i), i);
//    }
//}
shape3D::~shape3D() {
    delete[] z;
}

/**
 * @class бөмбөрцөг
 * гишүүн өгөгдөл - r радиус
 * гишүүн функц - талын урт, цэгүүдийн get(), set(int), периметр, талбай, цэгүүдийг олох setPoints()
 */
class sphere : public shape3D {
public:
    sphere();
    sphere(float, float, float, float, char[]);
    double area();
    double volume();
};

sphere::sphere() {}
sphere::sphere(float x, float y, float z, float r, char name[]):shape3D(x, y, z, r, name, 1) {}
double sphere::area() {
    return 4*PI*a*a;
}
double sphere::volume() {
    return (4/3)*PI*a*a*a;
}

/**
 * @class куб
 * гишүүн өгөгдөл - a талын урт, бүх цэгүүдийн координат
 * гишүүн функц - талын урт, цэгүүдийн get(), set(int), периметр perimeter(), талбай area(), эзэлхүүн volume(), цэгүүдийг олох setPoints()
 */
class cube : public shape3D {
private:
    void setPoints();
public:
    cube();
    cube(float, float, float, float, char[]);
    void setX(float, int);
    void setY(float, int);
    void setZ(float, int);
    double perimeter();
    double area();
    double volume();
    cube operator=(cube &);
};
cube::cube() {
    this->setPoints();
    shape::setName("");
}
cube::cube(float x, float y, float z, float a, char name[]):shape3D(x, y, z, a, name, 8) {
    this->setA(a);
    this->setPoints();
    shape::setName(name);
}
void cube::setX(float x, int i) {
    this->x[i] = x;
    this->setPoints();
}
void cube::setY(float y, int i) {
    this->y[i] = y;
    this->setPoints();
}
void cube::setZ(float z, int i) {
    this->z[i] = z;
    this->setPoints();
}
void cube::setPoints() {
    this->x[1] = x[0] + a;
    this->x[2] = x[0] + a;
    this->x[3] = x[0];
    this->x[4] = x[0];
    this->x[5] = x[0] + a;
    this->x[6] = x[0] + a;
    this->x[7] = x[0];
    this->y[1] = y[0];
    this->y[2] = y[0] - a;
    this->y[3] = y[0] - a;
    this->y[4] = y[0];
    this->y[5] = y[0];
    this->y[6] = y[0] - a;
    this->y[7] = y[0] - a;
    this->z[1] = z[0];
    this->z[2] = z[0];
    this->z[3] = z[0];
    this->z[4] = z[0] + a;
    this->z[5] = z[0] + a;
    this->z[6] = z[0] + a;
    this->z[7] = z[0] + a;
}
double cube::perimeter() {
    return a*8;
}
double cube::area() {
    return a*a*6;
}
double cube::volume() {
    return a*a*a;
}
cube cube::operator=(cube &s) {
    this->setName(s.getName());
    this->setN(s.getN());
    for(int i=0; i<this->n; i++){
        this->setX(s.getX(i), i);
        this->setY(s.getY(i), i);
        this->setZ(s.getZ(i), i);
    }
}

/**
 * @class тетраэдр
 * гишүүн өгөгдөл - a талын урт, бүх цэгүүдийн координат
 * гишүүн функц - талын урт, цэгүүдийн get(), set(int), периметр perimeter(), талбай area(), эзэлхүүн volume(), цэгүүдийг олох setPoints()
 */
class tetrahedron : public shape3D{
private:
    void setPoints();
public:
    tetrahedron();
    tetrahedron(float, float, float, float, char[]);
    void setX(float, int);
    void setY(float, int);
    void setZ(float, int);
    double perimeter();
    double area();
    double volume();
    tetrahedron operator=(tetrahedron &);
};

tetrahedron::tetrahedron() {
    this->setPoints();
}
tetrahedron::tetrahedron(float x, float y, float z, float a, char name[]):shape3D(x, y, z, a, name, 4) {
    this->setPoints();
}
void tetrahedron::setX(float x, int i) {
    shape::setX(x, i);
    this->setPoints();
}
void tetrahedron::setY(float y, int i) {
    shape::setY(y, i);
    this->setPoints();
}
void tetrahedron::setZ(float z, int i) {
    shape3D::setZ(z, i);
    this->setPoints();
}
void tetrahedron::setPoints() {
    float h = (sqrt(6)/3)*a;
    float ah = a / 2;
    this->x[1] = x[0] - ah;
    this->x[2] = x[0] + ah;
    this->x[3] = x[0];
    this->y[1] = y[0] - h;
    this->y[2] = y[0] - h;
    this->y[3] = y[0] - h;
    this->z[1] = z[0] - ah;
    this->z[2] = z[0] - ah;
    this->z[3] = z[0] + ah;
}
double tetrahedron::perimeter() {
    return this->a * 6;
}
double tetrahedron::area() {
    return sqrt(3)*a*a;
}
double tetrahedron::volume() {
    return (sqrt(2)/12)*a*a*a;
}
tetrahedron tetrahedron::operator=(tetrahedron &s) {
    this->setName(s.getName());
    this->setN(s.getN());
    for(int i=0; i<this->n; i++){
        this->setX(s.getX(i), i);
        this->setY(s.getY(i), i);
        this->setZ(s.getZ(i), i);
    }
}

void sort(shape2D**, int);

int main(){
    circle c1(1, 1, 5, (char *)"Тойрог 1");
    square s1(4,4,6, (char *)"Квадрат 1");
    triangle t1(5,5,4, (char *)"Зөв гурвалжин 1");
    circle c2(2, 1, 2, (char *)"Тойрог 2");
    square s2(6,5,3, (char *)"Квадрат 2");
    triangle t2(4,10,6, (char *)"Зөв гурвалжин 2");
    int n = 6;
    shape2D* shapes[n] = {&c1,&c2,&s1,&s2,&t1,&t2};

    cout << "------------------------" << endl;
    for(int i=0; i<n; i++){
        cout << shapes[i]->getName() << " >> " << shapes[i]->area() << endl;
    }
    cout << "------------------------" << endl;
    sort(shapes, n);
    for(int i=0; i<n; i++){
        cout << shapes[i]->getName() << " >> " << shapes[i]->area() << endl;
    }
    return 0;
}

void sort(shape2D** a, int n){
    for(int i=0; i<n; i++){
        shape2D *t = a[i];
        int j = i;
        while(j > 0 && t->area() < a[j-1]->area()){
            a[j] = a[j-1];
            j = j-1;
        }
        a[j] = t;
    }
}