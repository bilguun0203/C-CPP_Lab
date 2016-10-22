#include <iostream>

using namespace std;

int main() {
    int n, t, maxn=0, minn;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        if(maxn < t){
            maxn = t;
        }
        if(minn > t || i == 0){
            minn = t;
        }
    }
    cout << "Max=" << maxn << endl << "Min=" << minn << endl;
    return 0;
}
