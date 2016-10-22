#include <iostream>

using namespace std;

int power(int a, int n){
    int p=a;
    if(n==0){
        return 1;
    }
    for(int i=1; i<n; i++){  // too oruulj baihad 0 1 baigaa esehiig shalgah
        p = p*a;
    }
    return p;
}

int main(){
    int b, d=0, i=0;
    cin >> b;
    while(b>0){
        d += ((b%10)*power(2,i));
        b /= 10;
        i++;
    }
    cout << d << endl;
    return 0;
}
