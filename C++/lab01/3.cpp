#include <iostream>

using namespace std;

int area(int a, int b){
    return a*b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Tegsh untsugt S=" << area(a,b) << endl;
    return 0;
}
