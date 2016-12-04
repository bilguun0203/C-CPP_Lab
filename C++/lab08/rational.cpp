//
// Created by bilguun on 11/15/16.
//

#include <iostream>
#include "rational.h"

using namespace std;

rational::rational() {
    setP(1);
    setQ(1);
}
rational::rational(int p, int q) {
    setP(p);
    setQ(q);
}

int rational::getP() const {
    return p;
}

int rational::getQ() const {
    return q;
}

void rational::setP(int p) {
    this->p = p;
}

void rational::setQ(int q) {
    if(q!=0) {
        this->q = q;
    }
    else {
        cout << "[ALDAA] Q != 0" << endl; // 0 utga orj irsen bol huvaariin utgiig heveer uldeej aldaanii medeelel hevlene
    }
}

rational rational::operator+(const rational &r) {
    rational temp;
    if(this->q != r.getQ()){
        temp.setQ(this->q * r.getQ());
        temp.setP((this->p * r.getQ()) + (r.getP() * this->q));
    }
    return temp;
}

rational rational::operator+(float f) {
    int p = f;              // f-ees buhel hesgiig avna
    f = (f - p) * 10000;    // f-ees butarhai hesgiig avna
    p = p * 10000 + f;      // buhel toog butarhai hesgees avsan orongoor uragsh shiljuulj butarhai hesgiig nemne
    rational temp;
    temp.setP(p);
    temp.setQ(10000);
    ~temp;
    return (*this + temp);
}

rational rational::operator*(const rational &r) {
    rational temp;
    temp.setP(this->p * r.getP());
    temp.setQ(this->q * r.getQ());
    return temp;
}

rational rational::operator-(const rational &r) {
    rational temp;
    if(this->q != r.getQ()){
        temp.setQ(this->q * r.getQ());
        temp.setP((this->p * r.getQ()) - (r.getP() * this->q));
    }
    return temp;
}

rational rational::operator/(const rational &r) {
    rational temp;
    temp.setP(this->p * r.getQ());
    temp.setQ(this->q * r.getP());
    return temp;
}

rational rational::operator=(const rational &r) {
    this->p = r.getP();
    this->q = r.getQ();
}

rational rational::operator++() {
    rational temp;
    temp.setP(this->p + this->q);
    *this = temp;
    return *this;
}

rational rational::operator--() {
    rational temp;
    temp.setP(this->p - this->q);
    *this = temp;
    return temp;
}

void rational::operator+=(const rational &r) {
    *this = *this + r;
}

void rational::operator-=(const rational &r) {
    *this = *this - r;
}

void rational::operator*=(const rational &r) {
    *this = *this * r;
}

void rational::operator/=(const rational &r) {
    *this = *this / r;
}

ostream &operator<<(ostream &output, const rational &r) {
    output << r.p << "/" << r.q;
    return output;
}

istream &operator>>(istream &input, rational &r) {
    input >> r.p >> r.q;
    return input;
}
ostream &operator<<(ostream &output, const rational *r) {
    output << r->p << "/" << r->q;
    return output;
}

istream &operator>>(istream &input, rational *r) {
    input >> r->p >> r->q;
    return input;
}

rational rational::emhetgeh() {
    if(this->p == 0){
        this->q = 1;
    }
    int min = (this->p < this->q) ? this->p : this->q;  // hurtver, huvaari ali bagiig ni olno
    int h = 1;
    for(int i=2; i <= min; i++){                        // 2-oos min hurtel davtaj p, q zereg huvaah hamgiin ih toog olj h-d hadgalna
        if(this->p % i == 0 && this->q % i == 0){
            h = i;
        }
    }
    this->p /= h; // h-d huvaaj emhetgene
    this->q /= h;
    return *this;
}

rational rational::operator~() {
    return this->emhetgeh();
}

