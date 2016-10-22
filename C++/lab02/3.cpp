#include <iostream>

using namespace std;

int main()
{
    int a=100;
    int &p=a;
    cout << "A utga: " << a << "\nA hayag: " << &a << endl;
    cout << "\nP utga: " << p << "\nP hayag: " << &p << endl;
    return 0;
}
