#include <iostream>

using namespace std;

int main()
{
    int a=100, b=50, t;
    int *p1, *p2;
    cout << a << " " << b << endl;
    p1=&a;
    p2=&b;
    t=*p1;
    *p1=*p2;
    *p2=t;
    cout << a << " " << b;
    return 0;
}
