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
    float getX(int);
    void setX(float, int);
    float getY(int);
    void setY(float, int);
    float getA();
    void setA(float);
    char *getName();
    void setName(char[]);
    virtual double perimeter()= 0;
};

shape::shape() {
    setN(1);
    setX(0, 0);
    setY(0, 0);
    setName("");
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

/**
 * @class shape2D
 * гишүүн функц - area() талбай олох жинхэнэ виртуал функц
 */
class shape2D : public shape {
public:
    shape2D();
    shape2D(float, float, float, char[], int);
    virtual double area() = 0;
};
shape2D::shape2D(){}
shape2D::shape2D(float x, float y, float a, char name[], int n):shape(x, y, a, name, n){}

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
};

square::square():shape2D(0, 0, 0, "", 4) {
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

int main(){
    circle c(1, 1, 4, (char *)"Тойрог");
    cout << "Circle " << c.getName() << endl;
    cout << c.getX(0) << " " << c.getY(0) << " " << c.getA() << endl;
    cout << c.perimeter() << " " << c.area() << endl << endl;
    square s(4,4,3, (char *)"Квадрат");
    cout << "Square " << s.getName() << endl;
    cout << s.getX(0) << " " << s.getY(0) << " " << s.getA() << endl;
    cout << s.getX(1) << ";" << s.getY(1) << " " << s.getX(2) << ";" << s.getY(2) << " " << s.getX(3) << ";" << s.getY(3) << endl;
    cout << s.perimeter() << " " << s.area() << endl << endl;
    s.setX(3,0);
    s.setY(5,0);
    cout << "Square~" << endl;
    cout << s.getX(0) << " " << s.getY(0) << " " << s.getA() << endl;
    cout << s.getX(1) << ";" << s.getY(1) << " " << s.getX(2) << ";" << s.getY(2) << " " << s.getX(3) << ";" << s.getY(3) << endl;
    cout << s.perimeter() << " " << s.area() << endl << endl;
    triangle t(5,5,5, (char *)"Зөв гурвалжин");
    cout << "Triangle " << t.getName() << endl;
    cout << t.getX(0) << " " << t.getY(0) << " " << t.getA() << endl;
    cout << t.getX(1) << ";" << t.getY(1) << " " << t.getX(2) << ";" << t.getY(2) << endl;
    cout << t.perimeter() << " " << t.area() << endl << endl;
    t.setA(4);
    cout << "Triangle" << endl;
    cout << t.getX(0) << " " << t.getY(0) << " " << t.getA() << endl;
    cout << t.getX(1) << ";" << t.getY(1) << " " << t.getX(2) << ";" << t.getY(2) << endl;
    cout << t.perimeter() << " " << t.area() << endl << endl;
    return 0;
}