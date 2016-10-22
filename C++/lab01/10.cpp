#include <iostream>

using namespace std;

int main(){
    int n, e=0;
    cin >> n;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            e=1;
            break;
        }
    }
    if(e==0){
        cout << n << " anhnii too mun" << endl;
    }
    else {
        cout << n << " anhnii too bish" << endl;
    }
    return 0;
}
