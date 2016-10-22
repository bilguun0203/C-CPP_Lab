#include <iostream>

using namespace std;

int main() {
    int n, sum=0;
    float average;
    cin >> n;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    average = (float)sum / n;
    cout << n << " hurtelh toonii" << endl;
    cout << "Niilber=" << sum << endl << "Dundaj=" << average << endl;
    return 0;
}
