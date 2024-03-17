#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i < n; i++) {
        int b = (n-1)-i;
        int k = 2*i+1;
        while(b--) cout << " ";
        while(k--) cout << "*";
        cout << endl;
    }
    
    for (int i=n-1; i > 0; i--) {
        int b = n-i;
        int k = 2*i-1;
        while(b--) cout << " ";
        while(k--) cout << "*";
        cout << endl;
    }
}