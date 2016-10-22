#include <iostream>

using namespace std;

int main()
{
    int a=100, b=50, t;
    int &p1=a, &p2=b;
    cout << a << " " << b << endl;
    t=p1;
    p1=p2;
    p2=t;
    cout << a << " " << b;
    return 0;
}
