//
// Created by bilguun on 11/15/16.
//

#ifndef TOLLBRIDGE_H
#define TOLLBRIDGE_H

class tollbridge {
private:
    unsigned int carCount;
    double totalPay;
public:
    tollbridge();
    void payingcar();
    void nopaycar();
    void display();
};

#endif //TOLLBRIDGE_H
