//
// Created by bilguun on 11/15/16.
//

#include <iostream>
#include "rational.h"

using namespace std;

int main(){
    rational *r1 = new rational(2, 3);
    rational *r2 = new rational(5, 6);
    cout << *r1 << " + " << *r2 << " = " << *r1+*r2 << " = " << ~(*r1+*r2) << endl;
    cout << *r1 << " * " << *r2 << " = " << (*r1)*(*r2) << " = " << ~((*r1)*(*r2)) << endl;
    delete r1, r2;
    return 0;
}
