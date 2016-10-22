#include <iostream>

using namespace std;

void sort_asc(int a[], int n){
    int t;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
void sort_desc(int a[], int n){
    int t;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Anhniih:";
    for(int i=0; i<n; i++){
        cout << "\t" << a[i];
    }
    sort_asc(a,n);
    cout << endl << "Usuhuur:";
    for(int i=0; i<n; i++){
        cout << "\t" << a[i];
    }
    sort_desc(a,n);
    cout << endl << "Buurahaar:";
    for(int i=0; i<n; i++){
        cout << "\t" << a[i];
    }
    return 0;
}

