//
// Created by bilguun on 11/15/16.
//

#include <iostream>
#include "tollbridge.h"

using namespace std;

tollbridge::tollbridge() {
    this->carCount = 0;
    this->totalPay = 0;
}

void tollbridge::payingcar() {
    this->carCount++;
    this->totalPay += 10;
}

void tollbridge::nopaycar() {
    this->carCount++;
}

void tollbridge::display() {
    cout << "--------------Total---------------" << endl;
    cout << "|\tCar Count\t" << this->carCount << "\t|" << endl;
    cout << "|\tTotal\t\t" << this->totalPay << "\t|" << endl;
    cout << "----------------------------------" << endl;
}
