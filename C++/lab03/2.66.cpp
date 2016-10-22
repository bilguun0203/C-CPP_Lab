#include <iostream>

using namespace std;

int main(){
    int n=0;
    int t1=0, t2=1;
    while(n<1000){
        n=t1+t2;
        t1=t2;
        t2=n;
        if(n>99 && n<1000)
        {
            cout << n << " ";
        }
    }
    return 0;
}


