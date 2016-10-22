#include <iostream>

using namespace std;

class R {
private:
    int a;
    int b;
public:
    void set_r(int x, int y);
    void set_a(int x);
    void set_b(int x);
    int get_a();
    int get_b();
    R add(R r2); // R + R
    R add(int r2); // R + Int
    R subt(R r2); // R - R
    R subt(int r2); // R - Int
    R subtT(int r2); // Int - R
    R mult(R r2); // R * R
    R mult(int r2); // R * Int
    R div(R r2); // R / R
    R div(int r2); // R / Int
    R divT(int r2); // Int / R
};
void R::set_r(int x, int y){
    a = x;
    if(x!=0)
        b = y;
    else b = 1;
}
void R::set_a(int x){
    a = x;
}
void R::set_b(int x){
    if(x!=0)
        b = x;
    else b = 1;
}
int R::get_a(){
    return a;
}
int R::get_b(){
    return b;
}
R R::add(R r2){
    R result;
    result.set_a(a*r2.get_b()+r2.get_a()*b);
    result.set_b(b*r2.get_b());
    return result;
}
R R::add(int r2){
    R result;
    result.set_a(a+r2*b);
    result.set_b(b);
    return result;
}
R R::subt(R r2){
    R result;
    result.set_a(a*r2.get_b()-r2.get_a()*b);
    result.set_b(b*r2.get_b());
    return result;
}
R R::subt(int r2){
    R result;
    result.set_a(a-r2*b);
    result.set_b(b);
    return result;
}
R R::subtT(int r2){
    R result;
    result.set_a(r2*b-a);
    result.set_b(b);
    return result;
}
R R::mult(R r2){
    R result;
    result.set_a(a*r2.get_a());
    result.set_b(b*r2.get_b());
    return result;
}
R R::mult(int r2){
    R result;
    result.set_a(a*r2);
    result.set_b(b);
    return result;
}
R R::div(R r2){
    R result;
    result.set_a(a*r2.get_b());
    result.set_b(b*r2.get_a());
    return result;
}
R R::div(int r2){
    R result;
    result.set_a(a);
    result.set_b(b*r2);
    return result;
}
R R::divT(int r2){
    R result;
    result.set_a(b*r2);
    result.set_b(a);
    return result;
}

int main(){
    R r1, r2;
    int t;

    cout << "r1: ";
    cin >> t;
    r1.set_a(t);
    cin >> t;
    r1.set_b(t);

    cout << "r2: ";
    cin >> t;
    r2.set_a(t);
    cin >> t;
    r2.set_b(t);

    R rest;
    rest = r1.add(r2);
    cout << "Nemeh \t(" << r1.get_a() << "/" << r1.get_b() << ")+(" << r2.get_a() << "/" << r2.get_b() << ") = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.add(1);
    cout << "Nemeh \t(" << r1.get_a() << "/" << r1.get_b() << ")+1 = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.subt(r2);
    cout << "Hasah \t(" << r1.get_a() << "/" << r1.get_b() << ")-(" << r2.get_a() << "/" << r2.get_b() << ") = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.subt(1);
    cout << "Hasah \t(" << r1.get_a() << "/" << r1.get_b() << ")-1 = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.subtT(1);
    cout << "Hasah \t1-(" << r1.get_a() << "/" << r1.get_b() << ") = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.mult(r2);
    cout << "Urjih \t(" << r1.get_a() << "/" << r1.get_b() << ")*(" << r2.get_a() << "/" << r2.get_b() << ") = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.mult(3);
    cout << "Urjih \t(" << r1.get_a() << "/" << r1.get_b() << ")*3 = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.div(r2);
    cout << "Huvaah \t(" << r1.get_a() << "/" << r1.get_b() << ")/(" << r2.get_a() << "/" << r2.get_b() << ") = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.div(3);
    cout << "huvaah \t(" << r1.get_a() << "/" << r1.get_b() << ")/3 = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    rest = r1.divT(3);
    cout << "huvaah \t3/(" << r1.get_a() << "/" << r1.get_b() << ") = \t" << rest.get_a() << "/" << rest.get_b() << endl;
    return 0;
}
