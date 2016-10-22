#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum=0;
    cin >> n;
    float *f = new float[n];
    for(int i=0; i<n; i++){
        cin >> f[i];
        sum += f[i];
    }
    cout << sum/n << endl;
    return 0;
}
