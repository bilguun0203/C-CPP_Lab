//
// Created by bilguun on 11/15/16.
//

#include <iostream>

using namespace std;

#ifndef RATIONAL_H
#define RATIONAL_H


class rational {
private:
    int p, q; // p - hurtver, q - huvaari
public:
    // Constructor
    rational(); // anhnii utgatai baiguulagch
    rational(int, int); // parametertei baiguulagch
    // Getter
    int getP() const; // p-iin utgiig butsaana
    int getQ() const; // q-iin utgiig butsaana
    // Setter
    void setP(int p); // p-d utga olgoh
    void setQ(int q); // q-d utga olgoh
    // Operator overloading
    rational operator+(const rational &r); // rational + rational
    rational operator+(float f); // rational + float
    rational operator*(const rational &r); // rational * rational
    rational operator-(const rational &r); // rational - rational
    rational operator/(const rational &r); // rational / rational
    rational operator=(const rational &r); // rational = rational
    rational operator++(); // rational++ 1 buhleer nemegduulne
    rational operator--(); // rational-- 1 buhleer horogduulna
    void operator+=(const rational &r); // rational += rational
    void operator-=(const rational &r); // rational -= rational
    void operator*=(const rational &r); // rational *= rational
    void operator/=(const rational &r); // rational /= rational
    friend ostream& operator<<(ostream &, const rational &); // cout << rational | engiin huvisagch
    friend istream& operator>>(istream &, rational &); // cin >> rational | engiin huvisagch
    friend ostream& operator<<(ostream &, const rational *); // cout << rational | hayagan huvisagch
    friend istream& operator>>(istream &, rational *); // cin >> rational | hayagan huvisagch
    rational operator~(); // ~rational | emhetgeh operator
    rational emhetgeh(); // emhetgeh funkts
};

#endif //RATIONAL_H
