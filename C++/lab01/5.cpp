#include <iostream>

using namespace std;

int main() {
    int n, t, sum=0, multi=1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        sum += t;
        multi *= t;
    }
    cout << "Niilber=" << sum << endl << "Urjver=" << multi << endl;
    return 0;
}
