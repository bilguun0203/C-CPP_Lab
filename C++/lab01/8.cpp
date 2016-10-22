#include <iostream>

using namespace std;

float average(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return (float)sum/n;
}

int main() {
    int n, a[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Dundaj=" << average(a,n) << endl;
    return 0;
}

