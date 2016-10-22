#include <iostream>

using namespace std;

int main()
{
    int a, b, c, maxn;
    cin >> a >> b >> c;
    if(a>b)
    {
        maxn = a;
    }
    else
    {
        maxn = b;
    }
    if(maxn < c)
    {
        maxn = c;
    }
    cout << "Max = " << maxn << endl;
    return 0;
}
