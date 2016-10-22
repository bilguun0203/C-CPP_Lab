#include <iostream>

using namespace std;

int main() {
    int n, a[100], t=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            t++;
        }
    }
    cout << "Tegsh too " << t << " shirheg" << endl;
    return 0;
}

