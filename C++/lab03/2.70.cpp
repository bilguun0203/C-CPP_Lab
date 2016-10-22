#include <iostream>

using namespace std;

int main(){
    int n, h=0;
    cin >> n;
    while(n>0){
        h *=10;
        h +=n%10;
        n /=10;
    }
    cout << h;
    return 0;
}


