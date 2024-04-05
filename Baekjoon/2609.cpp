#include <iostream>
using namespace std;

int gcdF(int a, int b) {
    if (b==0)
        return a;
    else
        return gcdF(b, a%b);
}

int main() {
    int a, b, tmp;
    int gcd, LCM;

    cin >> a >> b;

    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    gcd = gcdF(a, b);
    LCM = a*b/gcd;
    
    cout << gcd << "\n" << LCM;
}