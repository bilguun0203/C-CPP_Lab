#include <iostream>

using namespace std;

int main()
{
    int a=100;
    int *p;
    p=&a;
    cout << "A utga: " << a << "\nA hayag: " << &a << endl;
    cout << "\nP utga /A hayag/: " << p << "\nA utga: " << *p << "\nP hayag: " << &p << endl;
    return 0;
}
